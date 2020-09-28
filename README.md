# SpaaSDK

## 安装

通过 CocoaPods

```ruby
pod "SpaaSDK"
```

## 使用方法

初始化 SDK

```Objective-C
#import <SpaaSDK/SpaaSDK.h>

...
    // 初始化 SDK
    [SpaaAd.shared setupWithAppId:@"xx" AppKey:@"xxx"];
    // 设置用户 IMEI
    [SpaaAd.shared setIMEI:@"<user IMEI>"];
    // 设置用户 OAID
    [SpaaAd.shared setOAID:@"<user OAID>"];
...
```

加载广告

```Objective-C
#import <SpaaSDK/SpaaSDK.h>

...
    [SpaaAd.shared loadAdWithAdId:@"1234"];
...
```

可以通过 SDK delegate 来获取详细信息。

```Objective-C
#import <SpaaSDK/SpaaSDK.h>

...
    SpaaAd.shared.delegate = self;
...


// 广告加载协议定义
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
```
