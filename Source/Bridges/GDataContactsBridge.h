//
//  GDataContactsBridge.h
//  GData
//
//  Created by Ivan Erceg on 7/11/14.
//
//

#import <Foundation/Foundation.h>

typedef void (^GDataContactsBridgeRetrieveUserContactsCallback)(NSError* error, NSArray* contacts);

//  Offers simplest retrieval of Google Contacts without exposing
//  the interface user to any GData implementation details.
@interface GDataContactsBridge : NSObject

+(void)retrieveUserContacts:(GDataContactsBridgeRetrieveUserContactsCallback)callback
              withAuthToken:(NSString*)token;

@end
