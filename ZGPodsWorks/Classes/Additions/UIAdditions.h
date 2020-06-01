//
//  UIAdditions.h
//  FarmAssure
//
//  Created by AmosZu on 16/4/1.
//  Copyright © 2016年 AmosZu. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^ButtonAction)(NSInteger tag);


@interface UIAdditions:  UIView <UITextFieldDelegate>

//button 回调
@property (nonatomic,  copy)ButtonAction  buttonAction;
@property (nonatomic,  strong)UIImage    *image;


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
                               font:(UIFont *)font;

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
                           Font:(UIFont *)font;

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
                       select:(BOOL)tag;

/**
 自定义UIImageView
 *@param rect          当前控件的大小
 *@param imgStr        设置图片
 */
+ (UIImageView *)imageViewWithFrame:(CGRect)rect setImg:(UIImage *)imgStr;



@end
