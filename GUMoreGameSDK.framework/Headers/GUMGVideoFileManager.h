//
//  GUMGVideoFileManager.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/29.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GUMGVideoFileManager : NSObject

+ (instancetype)shared;

/// Check the file wether is existed in the directory
/// @param fileName The video filename
- (BOOL)checkFileIsExistWithFileName:(NSString *)fileName;


/// Save the video file in the directory.
/// @param fileName The video filename
/// @param location The default storage path for the download file
- (BOOL)saveAdsVideoToFolderWithFileName:(NSString *)fileName downloadLocation:(NSURL *)location;

- (NSString *)adsVideoFilePathWithFileName:(NSString *)fileName;

@end

NS_ASSUME_NONNULL_END
