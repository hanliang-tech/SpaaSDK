//
//  SpaaAd.h
//  SpaaSDK
//
//  Created by BrikerMan on 2020/8/19.
//  Copyright © 2020 BrikerMan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPBidModel.h"

NS_ASSUME_NONNULL_BEGIN
 
@protocol SpaaAdDelegate <NSObject>

/// 加载广告成功
@optional
- (void)onSpaaSDKAdLoaded;

/// 加载广告出错
/// @param error 错误信息
@optional
- (void)onSpaaSDKAdLoadFailed: (NSError*) error;

/// 加载广告成功，但 SDK 不进行渲染，需要用户处理
/// @param bid 广告 Bid 对象
@optional
- (void)onSpaaSDKAdFetchedBid: (SPBidModel*) bid;

/// 广告渲染展示
@optional
- (void)onSpaaSDKAdDisplayed;

/// 广告渲染展示失败
/// @param error 失败原因
@optional
- (void)onSpaaSDKAdDisplayFailed: (NSError*) error;

/// 广告被点击
@optional
- (void)onSpaaSDKAdClicked;

/// 广告被关闭
@optional
- (void)onSpaaSDKAdClosed;
 
@end

@interface SpaaAd: NSObject {
    NSString *_AppId;
    NSString *_AppKey;
    NSString *_IMEI;
    NSString *_OAID;
}

@property(nonatomic, weak)id <SpaaAdDelegate> delegate;

@property (nonatomic, readonly) NSString *AppId;
@property (nonatomic, readonly) NSString *AppKey;
@property (nonatomic, readonly) NSString *IMEI;
@property (nonatomic, readonly) NSString *OAID;

+ (instancetype)shared;
- (instancetype)init NS_UNAVAILABLE; // Force deny initialization
+ (instancetype)new NS_UNAVAILABLE;


/// 初始化 SDK
/// @param AppId 当前获取的 AppID
/// @param AppKey 当前应用的 AppKey
- (void)setupWithAppId:(NSString *)AppId AppKey:(NSString *)AppKey;


/// 设置用户的 IEMI
/// @param IEMI IEMI
- (void)setIMEI:(NSString *)IEMI;

/// 设置当前用户的 OAID
/// @param OAID OAID
- (void)setOAID:(NSString *)OAID;


/// 加载广告
/// @param AdId 广告位id
- (void)loadAdWithAdId:(NSString *)AdId;

@end

NS_ASSUME_NONNULL_END
