//
//  UIButton+Delay.h
//  DelayButton
//
//  Created by AlbertYuan on 2021/1/11.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (Delay)

// 重复点击间隔
@property (nonatomic, assign) NSTimeInterval acceptEventInterval;
// 上一次点击时间戳
@property (nonatomic, assign) NSTimeInterval acceptEventTime;

@end

NS_ASSUME_NONNULL_END
