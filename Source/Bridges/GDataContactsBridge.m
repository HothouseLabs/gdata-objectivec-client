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

-(void)contactsFetchTicket:(GDataServiceTicket *)ticket
          finishedWithFeed:(GDataFeedContact *)feed
                     error:(NSError *)error {
    if (error) {
        if(self.callback) {
            self.callback(error, nil);
        }
    } else {
        if(self.callback) {
            //  TODO: Convert entries into contact properties. For now fake it as we still aren't getting data from Google Contacts API.
            NSDictionary* contactProperties = @{
                                                kGDataContactsBridgeEmailAddressesProperty: @[@"ivan@softwaremarbles.com"],
                                                kGDataContactsBridgeProfileImageUrlProperty: @"http://www.gravatar.com/avatar/926ddb506c8e20b6f672bbbbe13e0fa1.png",
                                                kGDataContactsBridgeFullNameProperty: @"Ivan Erceg",
                                                kGDataContactsBridgeFirstNameProperty: @"Ivan",
                                                kGDataContactsBridgeLastNameProperty: @"Erceg"
                                                };
            
            self.callback(nil, @[contactProperties]);
        }
        
//        for(GDataEntryContact* contact in [feed entries]) {
//            
//            // Name
//            NSString *ContactName = [[[contact name] fullName] contentStringValue];
//            
//            // Email
//            GDataEmail *email = [[contact emailAddresses] objectAtIndex:0];
//            NSString *ContactEmail =  @"";
//            if (email && [email address]) {
//                ContactEmail = [email address];
//            }
//            
//            // Phone
//            GDataPhoneNumber *phone = [[contact phoneNumbers] objectAtIndex:0];
//            NSString *ContactPhone = @"";
//            if (phone && [phone contentStringValue]) {
//                ContactPhone = [phone contentStringValue];
//            }
//            
//            // Address
//            GDataStructuredPostalAddress *postalAddress = [[contact structuredPostalAddresses] objectAtIndex:0];
//            NSString *address = @"";
//            if (postalAddress && [postalAddress formattedAddress]) {
//                address = [postalAddress formattedAddress];
//            }
//            
//            // Birthday
//            NSString *dob = @"";
//            if ([contact birthday]) {
//                dob = [contact birthday];
//            }
//            
//            // Notes
//            GDataEntryContent *content = [contact content];
//            NSString *notes = @"";
//            if (content && [content contentStringValue]) {
//                notes = [content contentStringValue];
//            }
//            
//            if (!ContactName || !(ContactEmail || ContactPhone) ) {
//                NSLog(@"Empty Contact Fields. Not Adding.");
//            }
//            else
//            {
//                NSArray *keys = [[NSArray alloc] initWithObjects:@"name", @"emailId", @"phoneNumber", @"address", @"dob", @"notes", nil];
//                NSArray *objs = [[NSArray alloc] initWithObjects:ContactName, ContactEmail, ContactPhone, address, dob, notes, nil];
//                NSDictionary *dict = [[NSDictionary alloc] initWithObjects:objs forKeys:keys];
//                NSLog(@"%@", dict);
//            }
//        }
    }
}

@end

@implementation GDataContactsBridge

+(void)retrieveUserContacts:(GDataContactsBridgeRetrieveUserContactsCallback)callback
              withAuthToken:(NSString*)token
{
    //  Initialize the singleton array of pending requests.
    static NSMutableArray* s_pendingRequests;
    static dispatch_once_t s_pendingRequestsSingletonInitializerOnceToken;
    dispatch_once(&s_pendingRequestsSingletonInitializerOnceToken, ^{
        s_pendingRequests = [NSMutableArray new];
    });
    
    GDataServiceGoogleContact *service = [GDataContactsBridge contactServiceWithAuthToken:token];
    
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

+ (GDataServiceGoogleContact *)contactServiceWithAuthToken:(NSString*)token
{
    //  Create a service object that doesn't cache response data as this
    //  object will be short-lived.
    GDataServiceGoogleContact* service = [GDataServiceGoogleContact new];
    //  Follow next links when there is more data than what can fit in a single batch.
    [service setServiceShouldFollowNextLinks:YES];
    [service setAuthToken:token];
    return service;
}

@end
