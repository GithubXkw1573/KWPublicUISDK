//
//  UITextView+RestrictLength.h
//  WowoMerchant
//
//  Created by kaiwei Xu on 2018/9/14.
//  Copyright © 2018年 NanjingYunWo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (RestrictLength)

/**
 最大输入字符长度限制(支持中文拼音过滤限制)
 
 @param maxLength eg:15
 */
- (void)yw_maxInputLength:(NSUInteger)maxLength;


//计算textview中文字的高度
- (CGFloat)yw_heightForTextViewWithfont:(UIFont *)font;

@end
