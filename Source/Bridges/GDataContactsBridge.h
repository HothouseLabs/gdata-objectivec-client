//
//  GDataContactsBridge.h
//  GData
//
//  Created by Ivan Erceg on 7/11/14.
//  Copyright (c) 2014 Hothouse Labs, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^GDataContactsBridgeRetrieveUserContactsCallback)(NSError* error, NSArray* contacts);

extern NSString* kGDataContactsBridgeEmailAddressesProperty;
extern NSString* kGDataContactsBridgeProfileImageUrlProperty;
extern NSString* kGDataContactsBridgeFirstNameProperty;
extern NSString* kGDataContactsBridgeLastNameProperty;
extern NSString* kGDataContactsBridgeFullNameProperty;

@class GTMOAuth2Authentication;

//  Offers simplest retrieval of Google Contacts without exposing
//  the interface user to any GData implementation details.
@interface GDataContactsBridge : NSObject

+(void)retrieveUserContacts:(GDataContactsBridgeRetrieveUserContactsCallback)callback
             withAuthorizer:(GTMOAuth2Authentication*)authorizer;

@end
