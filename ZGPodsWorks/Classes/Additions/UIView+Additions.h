//
//  UIView+Additions.h
//  FatDogLogistics
//
//  Created by Sandy on 16/11/8.
//  Copyright © 2016年 Sandy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Additions)

@property (nonatomic) CGFloat left;
@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat right;
@property (nonatomic) CGFloat bottom;
//@property (nonatomic) CGFloat rightAbsolute;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;
@property (nonatomic) CGPoint origin;
@property (nonatomic) CGSize  size;
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;

/**
 
 @将view的内容保存成image，即对view进行截屏.
 
 */

- (UIImage *)captureView;

+ (void)drawGradientInRect:(CGRect)rect withColors:(NSArray*)colors;

@end
