//
//  GUMGAdsInfoModel.h
//  GUMoreGameSDK
//
//  Created by gamesuion on 2019/10/28.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GUMGAdsMaterialModel.h"


NS_ASSUME_NONNULL_BEGIN

@interface GUMGAdsInfoModel : NSObject

@property (nonatomic, assign) NSUInteger adsSetId;
@property (nonatomic, assign) NSUInteger frequencyDuration;
@property (nonatomic, assign) NSUInteger frequencyLimit;
@property (nonatomic, strong) GUMGAdsMaterialModel *material;
@property (nonatomic, copy) NSString *adsSit;
@property (nonatomic, assign) NSUInteger adsSitId;

@end

NS_ASSUME_NONNULL_END
