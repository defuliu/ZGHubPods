//
//  UIImage+Additions.h
//  FatDogLogistics
//
//  Created by Sandy on 16/11/8.
//  Copyright © 2016年 Sandy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Additions)

- (UIImage *)resizableImage;

+ (UIImage *)imageWithColor:(UIColor *)color
                     opaque:(BOOL)opaque
                       size:(CGSize)size;

+ (UIImage *)roundedImageWithColor:(UIColor *)color
                            opaque:(BOOL)opaque
                              size:(CGSize)size
                      cornerRadius:(CGFloat)cornerRadius;

+ (UIImage *)imageWithColor:(UIColor *)color
                     opaque:(BOOL)opaque
                       size:(CGSize)size
                      shape:(UIBezierPath *)shape;

- (UIImage *)specImageResizableImage;

- (NSData *)getSmallImageforSize:(CGFloat)size
                      withImage:(UIImage *)sendImage;

/**
 
 @ UIImage 旋转
 */

+ (UIImage *)image:(UIImage *)image rotation:(UIImageOrientation)orientation;

+ (UIImage *)thumbnailWithImageWithoutScale:(UIImage *)image size:(CGSize)asize;

+ (NSData *)imageWithImage:(UIImage*)image
              scaledToSize:(CGSize)newSize;

@end
