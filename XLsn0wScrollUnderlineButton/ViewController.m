//
//  ViewController.m
//  XLsn0wScrollUnderlineButton
//
//  Created by ginlong on 2018/5/16.
//  Copyright © 2018年 ginlong. All rights reserved.
//

#import "ViewController.h"
#import "XLsn0wScrollUnderlineButton.h"
#import <XLsn0wKit_objc/XLsn0wKit_objc.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    NSArray *titles = @[@"抖音", @"XLsn0w", @"抖音", @"XLsn0w", @"抖音", @"XLsn0w", @"抖音", @"XLsn0w"];
    
   XLsn0wScrollUnderlineButton* _barScrollUnderlineButton = [[XLsn0wScrollUnderlineButton alloc] initWithFrame:(CGRectMake(0, 60, kScreenWidth, 40))];
    _barScrollUnderlineButton.titles = titles;
    [self.view addSubview:_barScrollUnderlineButton];


    _barScrollUnderlineButton.scrollUnderlineButtonBlock = ^(NSUInteger selectedIndex) {
        XLsn0wLog(@"selectedIndex = %ld", selectedIndex);
    };
    /// 设置字体和颜色
    _barScrollUnderlineButton.normalColor = [UIColor xlsn0w_hexString:@"#505050"];
    _barScrollUnderlineButton.selectedColor = [UIColor orangeColor];
    _barScrollUnderlineButton.selectedFont = [UIFont systemFontOfSize:16];
    _barScrollUnderlineButton.normalFont = [UIFont systemFontOfSize:16];
    _barScrollUnderlineButton.lineView.backgroundColor = [UIColor orangeColor];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
