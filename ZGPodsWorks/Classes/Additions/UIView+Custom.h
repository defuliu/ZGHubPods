//
//  UIView+Custom.h
//  FatDogLogistics
//
//  Created by Sandy on 16/11/8.
//  Copyright © 2016年 Sandy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Custom)

/**
 
 @return UITextField.
 
 */

- (UITextField *)sharedTextFieldCommonPropertyMethod:(UITextField *)textField
                                         placeholder:(NSString *)placeholderStr
                                       textAlignment:(NSTextAlignment)textAlignment
                                          returnType:(UIReturnKeyType)returnType
                                        keyboardType:(UIKeyboardType)keyboardType;

/**
 
 @return UILabel.
 
 */

- (UILabel *)shareLabelCommonPropertyMethod:(UILabel *)label
                                      title:(NSString *)title
                                       font:(UIFont *)font
                              textAlignment:(NSTextAlignment)textAlignment
                                  backColor:(UIColor *)backColor
                                  textColor:(UIColor*)textColor;

/**
 
 @ 自定义边框
 @return UIView.
 
 */
- (UIView *)shareCustomLineView:(UIView *)view
                       backColor:(UIColor *)backColor
                    cornerRadius:(CGFloat)cornerRadius
                     borderColor:(CGColorRef)borderColor
                     borderWidth:(CGFloat) borderWidth;


@end
