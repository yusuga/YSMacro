//
//  ViewController.m
//  YSMacroExample
//
//  Created by Yu Sugawara on 2014/01/28.
//  Copyright (c) 2014年 Yu Sugawara. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    CGRect frame = self.view.frame;
    
    NSLog(@"nslog");
    
    LOG(@"log");
    LOG_METHOD;
//    LOG_METHOD_AND_ABORT;
    
    LOG_POINT(frame.origin);
    LOG_POINT_AND_DESCRIPTION(@"desc", frame.origin);
    LOG_SIZE(frame.size);
    LOG_SIZE_AND_DESCRIPTION(@"desc", frame.size);
    LOG_RECT(frame);
    LOG_RECT_AND_DESCRIPTION(@"desc", frame);
    
    LOG_PRINTF(@"log printf");
    LOG_PRINTF_METHOD;
    
    LOG_PRINTF_POINT(frame.origin);
    LOG_PRINTF_POINT_AND_DESCRIPTION(@"desc", frame.origin);
    LOG_PRINTF_SIZE(frame.size);
    LOG_PRINTF_SIZE_AND_DESCRIPTION(@"desc", frame.size);
    LOG_PRINTF_RECT(frame);
    LOG_PRINTF_RECT_AND_DESCRIPTION(@"desc", frame);
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    
    LOG_RECURSIVE_DESCRIPTION_WINDOW;
    LOG_RECURSIVE_DESCRIPTION_VIEW(self.view);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
