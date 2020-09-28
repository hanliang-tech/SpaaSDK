//
//  SPBidModel.h
//  SpaaSDK
//
//  Created by BrikerMan on 2020/8/19.
//  Copyright © 2020 BrikerMan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPBidImageModel.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SPBidModel : NSObject

@property (nonatomic, copy)   NSString *identifier;
// 0 渲染， 1 不渲染
@property (nonatomic, assign) NSInteger *isRendering;
// 素材类型 0: 文字, 1: 图片, 2: 视频, 3: gif, 4: flash, 5: html,6:图文
@property (nonatomic, assign) NSInteger adType;
// 点击 url
@property (nonatomic, copy)   NSString *deepLinkURL;
// 点击 url
@property (nonatomic, copy)   NSString *iOSURL;
// 点击 url
@property (nonatomic, copy)   NSString *clickURL;
// 曝光监测URL，支持宏替换 第三方曝光监测
@property (nonatomic, copy)   NSArray<NSString *> *checkViews;
// 点击监测URL 第三方曝光监测
@property (nonatomic, copy)   NSArray<NSString *> *checkClicks;
// 点击 url
@property (nonatomic, copy)   NSString *checkPlayerURL;
// 图片对象数组
@property (nonatomic, copy)   NSArray<SPBidImageModel *> *images;


- (instancetype)initWithDict:(NSDictionary *)dict;

- (void) reportAdShow;
- (void) reportAdClickWithAdSize: (CGSize) adSize
                  touchDownPoint: (CGPoint) touchDownPoint
                   touchDownDate: (NSTimeInterval) touchDownDate
                    touchUpPoint: (CGPoint) touchUpPoint
                     touchUpDate: (NSTimeInterval) touchUpDate;

@end

NS_ASSUME_NONNULL_END
