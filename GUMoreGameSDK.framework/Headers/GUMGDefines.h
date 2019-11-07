//
//  GUMGDefines.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/25.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#ifndef GUMGDefines_h
#define GUMGDefines_h

#if defined(__cplusplus)
#define GUMG_EXTERN extern "C" __attribute__((visibility("default")))
#else
#define GUMG_EXTERN extern __attribute__((visibility("default")))
#endif

#ifndef GUMG_SCREENWIDTH
#define GUMG_SCREENWIDTH UIScreen.mainScreen.bounds.size.width
#endif

#ifndef GUMG_SCREENHIGHT
#define GUMG_SCREENHIGHT UIScreen.mainScreen.bounds.size.height
#endif

#ifndef GUMG_SAFEPADDINGTOP
#define GUMG_SAFEPADDINGTOP ((GUMG_SCREENHIGHT == 812 || GUMG_SCREENHIGHT == 896) ? 44 : 20)
#endif

#ifndef GUMG_SAFEPADDINGBOTTOM
#define GUMG_SAFEPADDINGBOTTOM ((GUMG_SCREENHIGHT == 812 || GUMG_SCREENHIGHT == 896) ? 34 : 0)
#endif

#if __has_attribute(objc_boxable)  // Available starting in Xcode 7.3.
#define GUMG_BOXABLE __attribute__((objc_boxable))
#else
#error "Use latest Xcode version."
#endif  // __has_attribute(objc_boxable)

#endif
