//
//  GDataContactsBridge.m
//  GData
//
//  Created by Ivan Erceg on 7/11/14.
//  Copyright (c) 2014 Hothouse Labs, Inc. All rights reserved.
//

#import "GDataContactsBridge.h"

#import "GDataFeedContact.h"
#import "GDataContacts.h"
#import "GTMOAuth2Authentication.h"

NSString* kGDataContactsBridgeEmailAddressesProperty = @"kGDataContactsBridgeEmailAddressesProperty";
NSString* kGDataContactsBridgeProfileImageUrlProperty = @"kGDataContactsBridgeProfileImageUrlProperty";
NSString* kGDataContactsBridgeFirstNameProperty = @"kGDataContactsBridgeFirstNameProperty";
NSString* kGDataContactsBridgeLastNameProperty = @"kGDataContactsBridgeLastNameProperty";
NSString* kGDataContactsBridgeFullNameProperty = @"kGDataContactsBridgeFullNameProperty";

@interface GDataContactsRequest : NSObject

@end

@interface GDataContactsRequest ()

@property (nonatomic, strong) GDataServiceGoogleContact* service;
@property (nonatomic, strong) GDataContactsBridgeRetrieveUserContactsCallback callback;
@property (nonatomic, strong) GDataServiceTicket* ticket;

@end

@implementation GDataContactsRequest

-(id)initWithGoogleContactService:(GDataServiceGoogleContact*)service
{
    self = [super init];
    if(self) {
        _service = service;
    }
    return self;
}

-(void)dealloc
{
    [_ticket release];
    [_service release];
    [super dealloc];
}

-(void)makeRequest:(GDataContactsBridgeRetrieveUserContactsCallback)callback
{
    self.callback = callback;
    
    //  Our feed corresponds to the default user (the user that is logged in the service)
    NSURL *feedURL = [GDataServiceGoogleContact contactFeedURLForUserID:kGDataServiceDefaultUser];
    
    //  Setup the contact query object.
    GDataQueryContact *query = [GDataQueryContact contactQueryWithFeedURL:feedURL];
    //  We want to retrieve the deleted contacts as well.
    [query setShouldShowDeleted:TRUE];
    const int ARBITRARY_BATCH_SIZE = 2000;
    [query setMaxResults:ARBITRARY_BATCH_SIZE];
    
    //  All requests *have* to be initiated from the main thread.
    dispatch_async(dispatch_get_main_queue(), ^{
        _ticket = [self.service fetchFeedWithQuery:query
                                          delegate:self
                                 didFinishSelector:@selector(contactsFetchTicket:finishedWithFeed:error:)];
    });
}

+(NSArray*)extractEmailAddressesFromContact:(GDataEntryContact*)contact
{
    NSMutableArray* emailAddresses = [NSMutableArray new];
    if(!contact.emailAddresses) {
        return emailAddresses;
    }
    
    for(GDataEmail* email in contact.emailAddresses) {
        [emailAddresses addObject:email.address];
    }
    
    return emailAddresses;
}

+(NSString*)extractProfileImageUrlFromContact:(GDataEntryContact*)contact
{
    //  Extract profile image URL from Google craziness.
    //  https://developers.google.com/google-apps/contacts/v3/#contact_photo_management
    NSString* profileImageUrl = nil;
    GDataLink* photoLink = contact.photoLink;
    BOOL photoLinkPointsToAnActualPhoto = photoLink != nil
        && photoLink.href != nil
        && photoLink.ETag != nil;
    if(photoLinkPointsToAnActualPhoto) {
        profileImageUrl = photoLink.href;
    }
    
    return profileImageUrl;
}

+(void)extractFullName:(NSString**)fullName
             firstName:(NSString**)firstName
              lastName:(NSString**)lastName
           fromContact:(GDataEntryContact*)contact
{
    if(contact.name) {
        *fullName = [contact.name.fullName contentStringValue];
        *firstName = [contact.name.givenName contentStringValue];
        *lastName = [contact.name.familyName contentStringValue];
    }
}

+(NSString*)emptyIfStringIsNull:(NSString*)string
{
    return string ?
        string :
        @"";
}

-(void)contactsFetchTicket:(GDataServiceTicket *)ticket
          finishedWithFeed:(GDataFeedContact *)feed
                     error:(NSError *)error {
    if (error) {
        if(self.callback) {
            self.callback(error, nil);
        }
    } else {
        //  Extract all the information that interests us.
        NSMutableArray* contacts = [NSMutableArray new];
        for(GDataEntryContact* contact in [feed entries]) {
            
            NSArray* emailAddresses = [GDataContactsRequest extractEmailAddressesFromContact:contact];
            
            NSString* profileImageUrl = [GDataContactsRequest emptyIfStringIsNull:[GDataContactsRequest extractProfileImageUrlFromContact:contact]];
            
            //  Get contact's different names.
            NSString* fullName;
            NSString* firstName;
            NSString* lastName;
            [GDataContactsRequest extractFullName:&fullName
                                        firstName:&firstName
                                         lastName:&lastName
                                      fromContact:contact];
            fullName = [GDataContactsRequest emptyIfStringIsNull:fullName];
            firstName = [GDataContactsRequest emptyIfStringIsNull:firstName];
            lastName = [GDataContactsRequest emptyIfStringIsNull:lastName];
            
            //  We can't pass nils as object or keys so we ensured that all our data is at least
            //  empty (e.g. empty array, empty string and so on)
            NSDictionary* contactProperties = @{
                                                kGDataContactsBridgeEmailAddressesProperty: emailAddresses,
                                                kGDataContactsBridgeProfileImageUrlProperty: profileImageUrl,
                                                kGDataContactsBridgeFullNameProperty: fullName,
                                                kGDataContactsBridgeFirstNameProperty: firstName,
                                                kGDataContactsBridgeLastNameProperty: lastName};
            
            [contacts addObject:contactProperties];
        }
        
        if(self.callback) {
            self.callback(nil, contacts);
        }
    }
}

@end

@implementation GDataContactsBridge

+(void)retrieveUserContacts:(GDataContactsBridgeRetrieveUserContactsCallback)callback
             withAuthorizer:(GTMOAuth2Authentication*)authorizer
{
    //  Initialize the singleton array of pending requests.
    static NSMutableArray* s_pendingRequests;
    static dispatch_once_t s_pendingRequestsSingletonInitializerOnceToken;
    dispatch_once(&s_pendingRequestsSingletonInitializerOnceToken, ^{
        s_pendingRequests = [NSMutableArray new];
    });
    
    GDataServiceGoogleContact *service = [GDataContactsBridge contactServiceWithAuthObject:authorizer];
    
    GDataContactsRequest* request = [[GDataContactsRequest alloc] initWithGoogleContactService:service];
    
    //  To keep the request object live while the request is being executed
    //  we keep track of all pending requets.
    @synchronized(s_pendingRequests) {
        [s_pendingRequests addObject:request];
    }
    
    [request makeRequest:^(NSError *error, NSArray *contacts) {
        //  First remove the request object from the list of pending requests.
        @synchronized(s_pendingRequests) {
            [s_pendingRequests removeObject:request];
        };
        
        if(callback) {
            callback(error, contacts);
        }
        
        [request release];
    }];
}

+ (GDataServiceGoogleContact *)contactServiceWithAuthObject:(GTMOAuth2Authentication*)authorizer
{
    //  Create a service object that doesn't cache response data as this
    //  object will be short-lived.
    GDataServiceGoogleContact* service = [GDataServiceGoogleContact new];
    //  Follow next links when there is more data than what can fit in a single batch.
    [service setServiceShouldFollowNextLinks:YES];
    [service setAuthorizer:authorizer];
    return service;
}

@end
