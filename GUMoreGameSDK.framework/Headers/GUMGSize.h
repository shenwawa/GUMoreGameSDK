//
//  GUMGSize.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/31.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GUMGDefines.h"

typedef struct GUMG_BOXABLE GUMGSize GUMGSize;

/// Video player view size
///
/// @see typedef GUMGSize
struct GUMG_BOXABLE GUMGSize {
    CGSize size;   //The video player view size. Dont't modify this value directyly.
};

#pragma mark Standard Sizes

/// More game video player small view, Typically 120x140.
GUMG_EXTERN GUMGSize const kGUMGSizeSmall;

/// More game video player normal view, Typically 240x280.
GUMG_EXTERN GUMGSize const kGUMGSizeNormal;

/// More game video player large view, Typically 360x420.
GUMG_EXTERN GUMGSize const kGUMGSizeLarge;

#pragma mark Custom Sizes

/// Returns a custom GAMGSize for the provided CGSize. Use this only if you require a non-standard
/// size. Otherwise, use one of the standard size constants above.
GUMG_EXTERN GUMGSize GUMGSizeFromCGSize(CGSize size);

/// Returns YES if the two GUAdSizes are equal, otherwise returns NO.
GUMG_EXTERN BOOL GUMGSizeEqualToSize(GUMGSize size1, GUMGSize size2);
