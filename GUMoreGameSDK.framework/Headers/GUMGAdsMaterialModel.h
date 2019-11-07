//
//  GUMGAdsMaterialModel.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/28.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GUMGAdsMaterialModel : NSObject

@property (nonatomic, assign) NSUInteger adId;
/// Game description
@property (nonatomic, copy) NSString *adDesc;
/// Game name.
@property (nonatomic, copy) NSString *title;
/// Appstore connect url.
@property (nonatomic, copy) NSString *appUrl;
/// Ads video localizes file name.
@property (nonatomic, copy) NSString *fileName;
/// Ads video download link url.
@property (nonatomic, copy) NSString *srcUrl;

@end

NS_ASSUME_NONNULL_END
