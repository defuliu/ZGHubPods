//
//  UIView+Custom.m
//  FatDogLogistics
//
//  Created by Sandy on 16/11/8.
//  Copyright © 2016年 Sandy. All rights reserved.
//

#import "UIView+Custom.h"

@implementation UIView (Custom)

#pragma mark UITextField

- (UITextField *)sharedTextFieldCommonPropertyMethod:(UITextField *)textField
                                         placeholder:(NSString *)placeholderStr
                                       textAlignment:(NSTextAlignment)textAlignment
                                          returnType:(UIReturnKeyType)returnType
                                        keyboardType:(UIKeyboardType)keyboardType
{
    textField.placeholder              = placeholderStr;
    textField.keyboardType             = keyboardType;
    textField.returnKeyType            = returnType;
    textField.textAlignment            = textAlignment;
//    textField.autoresizingMask         = UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth;
    textField.backgroundColor          = [UIColor clearColor];
//    textField.contentVerticalAlignment = UIControlContentVerticalAlignmentCenter;
//    textField.clearButtonMode          = UITextFieldViewModeWhileEditing;
//    textField.autocorrectionType       = UITextAutocapitalizationTypeNone;
    return textField;
}

#pragma mark UILabel

- (UILabel *)shareLabelCommonPropertyMethod:(UILabel *)label
                                      title:(NSString *)title
                                       font:(UIFont *)font
                              textAlignment:(NSTextAlignment)textAlignment
                                  backColor:(UIColor *)backColor
                                  textColor:(UIColor*)textColor
{
    label.font            = font;
    label.backgroundColor = backColor;
    label.textAlignment   = textAlignment;
    label.text            = title;
    label.textColor       = textColor;
    return label;
}

#pragma mark UIView

- (UIView *)shareCustomLineView:(UIView *)view
                      backColor:(UIColor *)backColor
                   cornerRadius:(CGFloat)cornerRadius
                    borderColor:(CGColorRef)borderColor
                    borderWidth:(CGFloat) borderWidth
{
    
    view.backgroundColor    = backColor;
    view.layer.cornerRadius = cornerRadius;
    view.layer.borderColor  = borderColor;
    view.layer.borderWidth = borderWidth;
    return view;
}


@end
