//
//  FBSDKAccessToken+Serializer.h
//  AirFacebook
//
//  Created by Ján Horváth on 16/09/15.
//
//

#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import "FlashRuntimeExtensions.h"

@interface FBSDKAccessToken (Serializer)

- (FREObject) toFREObject;
- (NSString *) toString;

@end
