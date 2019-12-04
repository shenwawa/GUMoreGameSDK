//
//  GUMGView.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/31.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GUMGSize.h"

@class GUMGAdsInfoModel;

typedef NS_ENUM(NSUInteger, GUMGPosition) {
    GUMGPositionMiddleCenter,
    GUMGPositionMiddleLeft,
    GUMGPositionMiddleRight,
    GUMGPositionTopCenter,
    GUMGPositionTopLeft,
    GUMGPositionTopRight,
    GUMGPositionBottomCenter,
    GUMGPositionBottomLeft,
    GUMGPositionBottomRight,
    GUMGPositionCustom
};

typedef void(^GUMGViewTapResponse)(void);

NS_ASSUME_NONNULL_BEGIN

@interface GUMGView : UIView

@property (nonatomic, assign) BOOL isMuted;

- (instancetype)initWithFrame:(CGRect)frame adsInfoModel:(GUMGAdsInfoModel *)infoModel;

- (CGPoint)generatorOriginPointByPosition:(GUMGPosition)position;

- (void)renderVideo;

- (void)setViewTapResponse:(GUMGViewTapResponse)tapResponse;

- (void)destoryView;

@end

NS_ASSUME_NONNULL_END
