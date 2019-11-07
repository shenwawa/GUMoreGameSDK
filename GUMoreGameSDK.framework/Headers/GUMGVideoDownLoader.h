//
//  GUMGVideoDownLoader.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/29.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GUMGDefines.h"

@class GUMGAdsInfoModel;

typedef NS_ENUM(NSUInteger, GUMGDownloadStatus) {
    GUMGDownloadStatusDidNotDownload,
    GUMGDownloadStatusDownloading,
    GUMGDownloadStatusDownloaded,
    GUMGDownloadStatusDownloadFailed,
};

NS_ASSUME_NONNULL_BEGIN

GUMG_EXTERN NSString *const kGUMGVideoDownloadSuccess;
GUMG_EXTERN NSString *const kGUMGVideoName;

@interface GUMGVideoDownLoader : NSObject

+ (void)downLoadVideoWithAdsInfo:(GUMGAdsInfoModel *)adsInfo;

@end

NS_ASSUME_NONNULL_END
