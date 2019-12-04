//
//  GUMGAdsInfoManager.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/28.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GUMGSize.h"
#import "GUMGView.h"
            
@class UIViewController;

typedef NS_ENUM(NSUInteger, GUMGShowProductStyle) {
    GUMGShowProductStyleNative,
    GUMGShowProductStyleAppStore
};

NS_ASSUME_NONNULL_BEGIN

@interface GUMGAdsInfoManager : NSObject

/// This is how you present the details of the game. 'GUMGShowProductStyleNative'
/// just modal a product viewController that display the game's detail information,
/// and 'GUMGShowProductStyleAppStore', it will open 'AppStore' application, then
/// show all the detail information about the game.
///
/// The default style is 'GUMGShowProductStyleNative'.
@property (nonatomic, assign) GUMGShowProductStyle showProductStyle;
@property (nonatomic, assign) GUMGPosition position;

- (void)getAllAdsInfoWithApiKey:(NSString *)apiKey adsSits:(NSArray *)adsSits;

- (BOOL)checkMoreGameVideoIsValidWithAdsSit:(NSString *)sit;

- (void)setMoreGameVideoIsMuted:(BOOL)isMuted;

- (void)showMoreGameVideoAdsWithAdsSit:(NSString *)sit
                                  size:(GUMGSize)size
                              position:(GUMGPosition)position
                    rootViewController:(UIViewController *)rootViewController;

- (void)setCustomPosition:(CGPoint)position;

- (void)hideMoreGameVideoADs;

@end

NS_ASSUME_NONNULL_END
