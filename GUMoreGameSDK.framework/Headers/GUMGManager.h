//
//  GUMGManager.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/28.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GUMGSize.h"
#import "GUMGView.h"
#import "GUMGAdsInfoManager.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^GUMGGetAdsSitsCompletion)(NSArray *adsSits);

@interface GUMGManager : NSObject

/**
 Singleton model, get the shared instance.

 @return Returns the shared GUMGManager instance.
 */
+ (GUMGManager *)shared;

/// Initialize the GUMoreGameSDK by apikey that you create on the dashboard
/// @param apiKey An identitifer for you sdk.
- (void)startMoreGameWithApiKey:(NSString *)apiKey;

/// Get ads sits completion callbackk
/// @param getAdsSitsCompletion callback methods
- (void)setGetAdsSitsCompletion:(GUMGGetAdsSitsCompletion)getAdsSitsCompletion;


/// Show more game ads video
/// @param sit video sit name
/// @param size video display size
/// @param position video display position on the screen
/// @param rootViewController videw container view controller.
- (void)showMoreGameVideoAdsWithAdsSit:(NSString *)sit
                                  size:(GUMGSize)size
                              position:(GUMGPosition)position
                    rootViewController:(UIViewController *)rootViewController;


/// Config what kind of style that show the product detail information on the app store.
/// @param style What kind of style.
- (void)setMoreGameShowProductStyle:(GUMGShowProductStyle)style;

/// Set a custom postion for more game display view.
/// @param position custom positon.
- (void)setCustomPosition:(CGPoint)position;

/// Hide the more game view.
- (void)hideMoreGameVideoADs;

/// Check ads video can be played according to he ads sit.
/// @param sit Ads video sit.
- (BOOL)moreGameVideoIsAvalidWithAdsSit:(NSString *)sit;

/// Get sdk version.
- (NSString *)sdkVersion;

@end

NS_ASSUME_NONNULL_END
