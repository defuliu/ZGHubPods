//
//  ZGEntityBase.m
//  FatDogLogistics
//
//  Created by Sandy on 16/11/8.
//  Copyright © 2016年 Sandy. All rights reserved.
//

#import "ZGEntityBase.h"

@implementation ZGEntityBase

#pragma mark to be implemented by subclass

+ (id)itemFromDict:(NSDictionary *)dict;
{
    return nil;
}

#pragma mark - array

+ (NSArray *)itemsFromArray:(NSArray *)array
{
    if (array == nil || [array class] == [NSNull class] || ![array isKindOfClass:[NSArray class]]) {
    
        return nil;
    }

    NSMutableArray *mArray = [NSMutableArray arrayWithCapacity:array.count];

    
    for (NSDictionary *dict in array) {

        id item = [self itemFromDict:dict];
        
        if (item) {
            [mArray addObject:item];
        }
    }
    return mArray;
}

@end
