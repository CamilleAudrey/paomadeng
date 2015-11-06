//
//  TextFlow.h
//  paomadeng
//
//  Created by 刘曼 on 15/11/6.
//  Copyright (c) 2015年 刘曼. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TextFlow : UIView {
    
    //显示文本的标签
    UILabel *_firstLabel;
    UILabel *_secondLabel;
    
    //定时器
    NSTimer *_timer;
    
    //显示的文本
    NSString *_text;
    
    //是否需要滚动
    BOOL _needFlow;
    
    //控件的框架大小
    CGRect _frame;
    
    //文本的字体
    UIFont *_font;
    
    //当前第一个控件的索引
    NSInteger _startIndex;
    
    //定时器每次执行偏移后，累计的偏移量之和
    CGFloat _XOffset;
    
    //文本显示一行，需要的框架大小
    CGSize _textSize;
    
    UIColor *textColor;
}
- (id)initWithFrame:(CGRect)frame BackGoundColor:(UIColor *)backgoundColor Text:(NSString *)text TextColor:(UIColor *)tmpTextColor textFont:(CGFloat)fontFloat;
//- (id)initWithFrame:(CGRect)frame Text:(NSString *)text;
//- (void)setFont:(UIFont *)font;
//- (void)setText:(NSString *)text;
//- (void)setBackgroundColor:(UIColor *)backgroundColor;
@end

