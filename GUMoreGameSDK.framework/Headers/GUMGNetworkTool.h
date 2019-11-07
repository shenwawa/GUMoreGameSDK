//
//  GUMGNetworkTool.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/28.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>
@class GUMGAdsInfoModel;

NS_ASSUME_NONNULL_BEGIN

@interface GUMGNetworkTool : NSObject

typedef void(^GetAllAdsSitsSuccessHandle)(NSArray *adsSits);
typedef void(^GetAllAdsSitsFailHandle)(NSError *error);

typedef void(^GetAdsInfoSuccessHandle)(GUMGAdsInfoModel *adsInfo);
typedef void(^GetAdsInfoFailHandle)(NSError *error);

+ (void)getAllAdsSitsInfoWithConfiguration:(NSDictionary *)configuration
                             successHandle:(GetAllAdsSitsSuccessHandle)successHandle
                                failHanlde:(GetAllAdsSitsFailHandle)failHandle;

+ (void)getAdsInfoWithConfiguration:(NSDictionary *)configuration
                      successHandle:(GetAdsInfoSuccessHandle)successHandle
                         failHanlde:(GetAdsInfoFailHandle)failHandle;

+ (void)reportAdsClickEventWithParams:(NSDictionary *)params;

+ (void)reportAdsShowEventWithParams:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
