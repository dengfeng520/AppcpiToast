//
//  ViewController.m
//  AppcpiToast
//
//  Created by rp.wang on 2019/9/6.
//  Copyright © 2019 Xi'an Boxin Information Technology Co., Ltd. All rights reserved.
//

#import "ViewController.h"
#import "AppcpiToastView+Category.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    AppcpiToastView *toastView = [AppcpiToastView showLTToastViewAnimation:self.view toastWithFrame:CGRectMake(10, 80, 120, 60) isAnimation:YES];
    toastView.backViewRadius = 5;
    toastView.titleChar = @"test test";
    
}


@end
