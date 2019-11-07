//
//  GUAdsNetwork.m
//  GUAdSDK
//
//  Created by gamesuion on 2019/9/24.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GUNetworkInformation : NSObject

/// Gets the network type of the current device
+ (NSString *)getNetworkType;

/// Gets the network type of the current device by reachability
+ (NSString *)getNetworkTypeByReachability;

/// Get information about wifi of the current device
+ (id)fetchSSIDInfo;

///Get wifi name of the current device
+ (NSString *)getWifiSSID;

/// Get wifi's mac address of the current device
+ (NSString *)getWifiBSSID;

/// Get the wifi signal strength of the current device
+ (int)getWifiSignalStrength;

/// Get wifi's IP address of the current device
+ (NSString *)getIPAddress;
@end
