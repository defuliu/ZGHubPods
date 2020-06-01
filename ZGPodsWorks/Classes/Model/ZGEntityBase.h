//
//  ZGEntityBase.h
//  FatDogLogistics
//
//  Created by Sandy on 16/11/8.
//  Copyright © 2016年 Sandy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZGEntityBase : NSObject

/** @解析
 itemFromDict: 将 NSDictionary数据解析成本对象
 @return ZGEntityBase.
 */

+ (id)itemFromDict:(NSDictionary *)dict;

/** @解析
 itemsFromArray: 将 NSArray数据解析成本对象数组
 @return NSArray.
 */

+ (NSArray *)itemsFromArray:(NSArray *)array;

@end
