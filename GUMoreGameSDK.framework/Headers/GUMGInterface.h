//
//  GUMGInterface.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/28.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#ifndef GUMGInterface_h
#define GUMGInterface_h

/// Server's Url.
#define BaseUrl @"https://moregame.gamesuion.com/api"

/// Get all ads sits.
#define GetAdsSitsUrl @"/sdk/v3/appLaunch"

/// Get ads infomation.
#define GetAdsInfoUrl @"/sdk/v3/adList"

/// If ads did show, We should report the action to the server.
#define AdsDidShowReportUrl @"/sdk/v3/display"

/// If ads was clicked, we should report the action to the server.
#define AdsDidClickReportUrl @"/sdk/v3/click"

#endif /* GUMGInterface_h */
