//
//  GUMGAdsInfo.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/29.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GUMGVideoDownLoader.h"
#import "GUMGAdsInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface GUMGAdsInfo : NSObject
/// Ads video infomations.
@property (nonatomic, strong, readonly) GUMGAdsInfoModel *ads;

/// Ads video download status.
@property (nonatomic, assign, readonly) GUMGDownloadStatus downloadStatus;

- (instancetype)initWithAdsInfoModel:(GUMGAdsInfoModel *)infoModel;

/// Start download ads video from the network
- (void)downloadAdsVideo;

- (void)refreshVideoPlayFrequencyFlag;

- (BOOL)isValid;

@end

NS_ASSUME_NONNULL_END
