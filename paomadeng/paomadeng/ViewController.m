//
//  ViewController.m
//  paomadeng
//
//  Created by 刘曼 on 15/11/6.
//  Copyright (c) 2015年 刘曼. All rights reserved.
//

#import "ViewController.h"
#import "TextFlow.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    TextFlow *text = [[TextFlow alloc]initWithFrame:CGRectMake(10, 100, [[UIScreen mainScreen] bounds].size.width-20, 40) BackGoundColor:[UIColor redColor] Text:@"11适合很恩饿哦和我我和偶尔回我文红恩    事实上司是事实上司是时候死" TextColor:[UIColor cyanColor] textFont:14];
    [self.view addSubview:text];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
