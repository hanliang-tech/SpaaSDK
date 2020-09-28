//
//  SPBidImageModel.h
//  SpaaSDK
//
//  Created by BrikerMan on 2020/8/19.
//  Copyright © 2020 BrikerMan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
* 图片形式的广告创意
* 版本支持：V1.0+
*/
@interface SPBidImageModel : NSObject


// 图片地址
@property (nonatomic, copy)   NSString *url;
// 图片高度
@property (nonatomic, assign) NSInteger height;
// 图片宽度
@property (nonatomic, assign) NSInteger width;

- (instancetype)initWithDict:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
