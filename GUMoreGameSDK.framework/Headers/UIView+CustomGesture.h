//
//  UIView+CustomGesture.h
//  PlayerTest
//
//  Created by gamesuion on 2019/10/25.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (CustomGesture)

- (void)addTapGestureWithTarget:(id)tagert action:(SEL)action;

@end

NS_ASSUME_NONNULL_END
