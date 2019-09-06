//
//  AppcpiPublicClass.m
//  AppcpiToastView
//
//  Created by rp.wang on 2019/3/14.
//  Copyright © 2019 西安乐推网络科技有限公司. All rights reserved.
//

#import "AppcpiPublicClass.h"

@implementation AppcpiPublicClass

// MARK: - ==========================
+ (BOOL)isStringNull:(NSString *)string {
    if (string == nil || string == NULL) {
        return YES;
    }
    if ([string isKindOfClass:[NSNull class]]) {
        return YES;
    }
    if ([[string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] length] == 0) {
        return YES;
    }
    if( [string isEqualToString:@""]){
        return YES;
    }
    if([string isEqualToString:@"<null>"]){
        return YES;
    }
    if([string isEqualToString:@"(null)"]){
        return YES;
    }
    return NO;
}

// MARK: - ==========================
+ (BOOL)isiPhoneXDevice {
    BOOL iPhoneX = NO;
    if (UIDevice.currentDevice.userInterfaceIdiom != UIUserInterfaceIdiomPhone) {
        return iPhoneX;
    }
    if (@available(iOS 11.0, *)) {
        UIWindow *mainWindow = [[[UIApplication sharedApplication] delegate] window];
        if (mainWindow.safeAreaInsets.bottom > 0.0) {
            iPhoneX = YES;
        }
    }
    return iPhoneX;
}


@end
