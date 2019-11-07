//
//  GUMGConfiguration.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/25.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GUMGGenerator;
NS_ASSUME_NONNULL_BEGIN

@interface GUMGConfiguration : NSObject

/// Ads set name.
@property (nonatomic, copy) NSString *adsSit;

- (instancetype)initWithGenerator:(GUMGGenerator *)generator;

+ (instancetype)configurationWithGenerator:(GUMGGenerator *)generator;

///Used to Get ads set list.
- (NSDictionary *)adsSitsConfiguration;

/// Used to get ads infomation.
- (NSDictionary *)adsInfoConfiguration;

@end

NS_ASSUME_NONNULL_END
