//
//  UIAdditions.m
//  FarmAssure
//
//  Created by AmosZu on 16/4/1.
//  Copyright © 2016年 AmosZu. All rights reserved.
//

#import "UIAdditions.h"

@implementation UIAdditions :UIView


/**
 自定义textField
 *@param rect          当前控件的大小
 *@param placeholder   占位符
 *@param textAlignment 对齐格式
 *@param returnType    弹出键盘返回类型
 *@param keyboardType  键盘类型
 */
+ (UITextField *)textFieldWithFrame:(CGRect)rect
                           placeholder:(NSString *)placeholder
                         textAlignment:(NSTextAlignment)textAlignment
                            returnType:(UIReturnKeyType)returnType
                          keyboardType:(UIKeyboardType)keyboardType
                                  font:(UIFont *)font
{
    // 通过kvc的方式设置placeholder的颜色
    // [textField setValue:[UIColor redColor] forKeyPath:@"_placeholderLabel.textColor"];
    // [textField setValue:[UIFont boldSystemFontOfSize:16] forKeyPath:@"_placeholderLabel.font"];
    
    UITextField *textField  = [[UITextField alloc] initWithFrame:rect];
    textField.placeholder   = placeholder;
    textField.textAlignment = textAlignment;
    textField.returnKeyType = returnType;
    textField.keyboardType  = keyboardType;
    textField.backgroundColor = [UIColor clearColor];
    textField.font = font;
    return textField;
}


/**
 自定义Label
 *@param rect          当前控件的大小
 *@param text          占位符
 *@param alignment 对齐格式
 *@param color         字体颜色
 *@param font          字体类型
 */
+(UILabel *)birthLableWithFrame:(CGRect)rect
                           Text:(NSString *)text
                  TextAlignment:(NSTextAlignment)alignment
                      TextColor:(UIColor *)color
                           Font:(UIFont *)font
{

    UILabel * label = [[UILabel alloc] initWithFrame:rect];
    label.text = text;
    label.textAlignment = alignment;
    label.textColor = color;
    label.font = font;
    label.backgroundColor = [UIColor clearColor];
    return label;
}


/**
 自定义Label
 *@param rect          当前控件的大小
 *@param nomarlImage   点击选中背景图片
 *@param lightImage    不选中图片
 *@param title         按钮的标题
 *@param textColor     字体颜色
 *@param font          字体类型
 *@param tag           是否选中图片
 */
+ (UIButton *)buttonWithFrame:(CGRect)rect
                    backImage:(NSString *)nomarlImage
               backlightImage:(NSString *)lightImage
                        title:(NSString *)title
                   titleColor:(UIColor  *)textColor
                    titleFont:(UIFont   *)font
                       select:(BOOL)tag
{
    UIButton *button = [[UIButton alloc] initWithFrame:rect];
    button.backgroundColor = [UIColor clearColor];
    [button setBackgroundImage:[[[self class] alloc]convertStringToImage:nomarlImage]forState:UIControlStateSelected];
    [button setBackgroundImage:[[[self class] alloc]convertStringToImage:lightImage]forState:UIControlStateNormal];
    [button setTitleColor:textColor forState:UIControlStateNormal];
    [button setTitle:title forState:UIControlStateNormal];
    button.titleLabel.font = font;
    button.selected = tag;
    
    return button;
}

/**
 自定义UIImageView
 *@param rect          当前控件的大小
 *@param imgStr        设置图片
 */
+ (UIImageView *)imageViewWithFrame:(CGRect)rect setImg:(UIImage *)imgStr
{
    UIImageView *imageView = [[UIImageView alloc] initWithFrame:rect];
    imageView.image = imgStr;
    return imageView;
}



#pragma mark - Sting转化UIImage
- (UIImage *)convertStringToImage:(NSString *)string
{
    return [UIImage imageNamed:string];
}

@end
