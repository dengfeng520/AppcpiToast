//
//  AppcpiToastView+Category.h
//  AppcpiToastView
//
//  Created by rp.wang on 2019/3/14.
//  Copyright © 2019 西安乐推网络科技有限公司. All rights reserved.
//

#import "AppcpiToastView.h"

NS_ASSUME_NONNULL_BEGIN

@interface AppcpiToastView (Category)

/* --------------------------------------------------------------------
 * Creates a new 'AppcpiToastView' and shows it, The counterpart to this method is 'hiddenMatchingViewAnimation: isAnimation '.
 * isAnimation : Whether to load animation
 *  --------------------------------------------------------------------
 * 新建一个AppcpiToastView，并加载在相应的View上，调用方法'hiddenMatchingViewAnimation: isAnimation'隐藏ToaatView。
 * isAnimation : 显示时是否使用动画。
 * --------------------------------------------------------------------
 */
+ (instancetype)showLTToastViewAnimation:(UIView *)AddView toastWithFrame:(CGRect)frame isAnimation:(BOOL)animation;
/* --------------------------------------------------------------------
 * Hide the parent trying to load the last loaded 'AppcpiToastView',he counterpart to this method is 'showToastViewAnimation:isAnimation'.
 * isAnimation : Whether to load animation.
 * return YES if 'AppcpiToastView' was found and removed, NO otherwise.
 * --------------------------------------------------------------------
 * 隐藏父视图上最后一个加载的'AppcpiToastView',与之对应的是'showToastViewAnimation:isAnimation'方法。
 * isAnimation : 显示时是否使用动画。
 * 成功移除了'AppcpiToastView'，返回'YES',反之为'NO'。
 * --------------------------------------------------------------------
 */
+ (BOOL)hiddenLTToastViewAnimation:(UIView *)AddView isAnimation:(BOOL)animation;
/* --------------------------------------------------------------------
 * Hide and remove all 'AppcpiToastView' on the parent view
 * return YES if a 'ToaatView' was found and removed, NO otherwise.
 * --------------------------------------------------------------------
 * 隐藏并移除父视图上的所有'AppcpiToastView'
 * --------------------------------------------------------------------
 */
+ (NSInteger)hiddenSuperViewAllToastView:(UIView *)addView isAnimation:(BOOL)animation;
/* --------------------------------------------------------------------
 * Find if the parent view has 'AppcpiToastView' and returns it.
 * --------------------------------------------------------------------
 * 查找父视图上是否有'AppcpiToastView'
 * --------------------------------------------------------------------
 */
+ (AppcpiToastView *)toastForAddView:(UIView *)addView;
/* --------------------------------------------------------------------
 * Hide the 'AppcpiToastView' after a delay.
 * --------------------------------------------------------------------
 * 显示之后开启一个计时器，指定时间后隐藏
 * --------------------------------------------------------------------
 */
- (void)hiddenLTToastViewAnimation:(BOOL)animated afterDelay:(NSTimeInterval)delay;
/* --------------------------------------------------------------------
 *
 *
 * --------------------------------------------------------------------
 */
- (void)showToastWithAnimated:(BOOL)animated completion:(void(^)(BOOL finished))completion;
/* --------------------------------------------------------------------
 *
 *
 * --------------------------------------------------------------------
 */
- (void)hiddenToastWithAnimated:(BOOL)animated completion:(void(^)(BOOL finished))completion;

@end

NS_ASSUME_NONNULL_END
