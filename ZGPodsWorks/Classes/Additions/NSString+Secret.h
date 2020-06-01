//
//  NSString+Secret.h
//  FatDogLogistics
//
//  Created by Sandy on 16/11/8.
//  Copyright © 2016年 Sandy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Secret)


/** @加密 根据需要选择加密方式
 
 @ md5   md5加密
 @return string.
 
 */

+(NSString *)md5:(NSString *)inPutText;

/** @加密 根据需要选择加密方式
 
 @ md5   md5加密
 @return string.
 
 */

+ (NSString *)sha1:(NSString *)inPutText;

@end
