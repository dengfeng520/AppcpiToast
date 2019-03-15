//
//  AppcpiPublicClass.h
//  AppcpiToastView
//
//  Created by rp.wang on 2019/3/14.
//  Copyright © 2019 西安乐推网络科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppcpiPublicClass : NSObject


// Whether the character is null.
+(BOOL)isStringNull:(NSString *)string;
// If the device is an iPhoneX
+(BOOL)isiPhoneXDevice;

@end

NS_ASSUME_NONNULL_END
