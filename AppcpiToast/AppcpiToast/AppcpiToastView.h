//
//  AppcpiToastView.h
//  AppcpiToastView
//
//  Created by rp.wang on 2019/3/14.
//  Copyright © 2019 西安乐推网络科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppcpiPublicClass.h"

NS_ASSUME_NONNULL_BEGIN

@interface AppcpiToastView : UIView

//--------------------------------
/*
 * Set the location that indicates the View.
 * 设置三角位置
 */
@property (assign, nonatomic) float indicationSize;
/*
 * Set the radius size of 'AppcpiToastView'
 * 设置圆角
 */
@property (assign, nonatomic) float backViewRadius;
/*
 * Set the text content of 'AppcpiToastView'
 * 文字内容
 */
@property (copy, nonatomic) NSString *titleChar;
/*
 * Set the text size of 'AppcpiToastView'
 * 字体大小
 */
@property (assign, nonatomic) float fontSize;
/*
 * Set the text color of 'AppcpiToastView'
 * 字体颜色
 */
@property (strong, nonatomic) UIColor *titleColor;
/*
 * Whether 'AppcpiToastView' is has been loaded.
 * 'AppcpiToastView' 是否已经显示
 */
@property (nonatomic, assign, getter=hasisLoaded) BOOL isLoaded;
/*
 * Whether to play the animation when show 'AppcpiToastView', the default is NO.
 * 显示时是否使用动画， 默认为NO
 */
@property (assign, nonatomic) BOOL isUseAnimation;
/*
 * Set the background color of 'AppcpiToastView'.
 * 背景颜色
 */
@property (strong, nonatomic) UIColor *backgroundColor;
/*
 * Hide the 'AppcpiToastView' after a delay.
 */
@property (assign, nonatomic) float aboutDelay;

@end

NS_ASSUME_NONNULL_END
