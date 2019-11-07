//
//  GUMGGenerator.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/25.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GUMGGenerator : NSObject

/// ApiKey is string that unique identify of the GUMGSDK.
@property (nonatomic, copy) NSString *apiKey;

/// Get your device IDFA.
@property(nonatomic, copy, readonly) NSString *advertisingId;

/// Your app current version.
@property(nonatomic, copy, readonly) NSString *appVersion;

/// Your app bundle identitifer.
@property(nonatomic, copy, readonly) NSString *bundleId;

///Channel is a constant, if your app from apple's appstore, channel is
///'ios_appstore', otherwise, channel is 'android_googleplay'. Here, This is a iOS SDK, so channel is assigned to 'ios_appstore'
@property(nonatomic, copy, readonly) NSString *channel;

/// Your device language that current setting.
@property(nonatomic, copy, readonly) NSString *language;

/// Your device operation system model.
@property(nonatomic, copy, readonly) NSString *opeSysModel;

/// Your device operation system.
@property(nonatomic, copy, readonly) NSString *opeSystem;

/// The version of your device operation system.
@property(nonatomic, copy, readonly) NSString *opeSystemVersion;

///  Custom create an identifier that is made up of a timestamp and seven random
///  English letters
@property(nonatomic, copy, readonly) NSString *userId;

/// Get wifi's validation of the current device.
@property(nonatomic, assign, readonly) BOOL wifiIsValid;

@end

NS_ASSUME_NONNULL_END
