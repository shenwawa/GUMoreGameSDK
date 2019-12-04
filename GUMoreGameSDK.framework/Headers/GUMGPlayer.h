//
//  GUMGPlayer.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/31.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>
@class UIView;

NS_ASSUME_NONNULL_BEGIN

@interface GUMGPlayer : NSObject

/// 是否静音
@property (nonatomic, assign) BOOL isMuted;

- (instancetype)initWithFileName:(NSString *)fileName contentView:(UIView *)contentView;

- (void)play;

- (void)destoryPlayer;

@end

NS_ASSUME_NONNULL_END
