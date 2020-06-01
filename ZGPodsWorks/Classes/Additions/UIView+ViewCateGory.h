//
//  UIView+ViewCateGory.h
//  EntrustLogistics
//
//  Created by 刘德福 on 2017/10/16.
//  Copyright © 2017年 李雪冰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ViewCateGory)


/**
 自定义UITextField

 @param rect frame
 @param placeholder placeholder descriptionplaceholder
 @param textAlignment textAlignment
 @param returnType returnType
 @param keyboardType keyboardType description
 @param font font description
 @return return value description
 */
+ (UITextField *)textFieldWithFrame:(CGRect)rect
                        placeholder:(NSString *)placeholder
                      textAlignment:(NSTextAlignment)textAlignment
                         returnType:(UIReturnKeyType)returnType
                       keyboardType:(UIKeyboardType)keyboardType
                               font:(UIFont *)font;
/**
 自定义label

 @param rect rect description
 @param text text description
 @param alignment alignment description
 @param color color description
 @param font font description
 @return return value description
 */
+(UILabel *)birthLableWithFrame:(CGRect)rect
                           Text:(NSString *)text
                  TextAlignment:(NSTextAlignment)alignment
                      TextColor:(UIColor *)color
                           Font:(UIFont *)font;
/**
 自定义按钮
 @param rect frame
 @param nomarlImage btn image
 @param lightImage lightImage description
 @param title title description
 @param textColor textColor description
 @param font font description
 @param tag tag description
 @return return value description
 */
+ (UIButton *)buttonWithFrame:(CGRect)rect
                    backImage:(NSString *)nomarlImage
               backlightImage:(NSString *)lightImage
                        title:(NSString *)title
                   titleColor:(UIColor  *)textColor
                    titleFont:(UIFont   *)font
                       select:(BOOL)tag;


/**
 自定义图片
 @param rect rect description
 @param imgStr imgStr description
 @return return value description
 */
+ (UIImageView *)imageViewWithFrame:(CGRect)rect
                             setImg:(UIImage *)imgStr;

/**
 图片拉伸平铺
 @param edgeInsetsMake  CGFloat top, left, bottom, right;
 @return UIImage
 */
+ (UIImage *)resizableImageWithCapInsets:(UIEdgeInsets)edgeInsetsMake
                                   image:(UIImage *)image;

@end
