//
//  NSString+Secret.m
//  FatDogLogistics
//
//  Created by Sandy on 16/11/8.
//  Copyright © 2016年 Sandy. All rights reserved.
//

#import "NSString+Secret.h"
#import "CommonCrypto/CommonDigest.h"

@implementation NSString (Secret)

#pragma mark MD5

+(NSString *)md5:(NSString *)inPutText
{
    if (inPutText.length == 0) {
        return nil;
    }
    else {
        const char * _originalStr = [inPutText UTF8String];
        unsigned char result[CC_MD5_DIGEST_LENGTH];
        CC_MD5(_originalStr, (unsigned)strlen(_originalStr), result);
        
        return [[NSString stringWithFormat:@"%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X",
                 result[0], result[1], result[2], result[3],
                 result[4], result[5], result[6], result[7],
                 result[8], result[9], result[10], result[11],
                 result[12], result[13], result[14], result[15]
                 ] lowercaseString];
    }
}

#pragma mark SHA1

+ (NSString *)sha1:(NSString *)inPutText
{
    const char *cstr = [inPutText cStringUsingEncoding:NSUTF8StringEncoding];
    NSData *data = [NSData dataWithBytes:cstr length:inPutText.length];
    
    uint8_t digest[CC_SHA1_DIGEST_LENGTH];
    
    CC_SHA1(data.bytes, (unsigned)data.length, digest);
    
    NSMutableString* output = [NSMutableString stringWithCapacity:CC_SHA1_DIGEST_LENGTH * 2];
    
    for(int i = 0; i < CC_SHA1_DIGEST_LENGTH; i++) {
        [output appendFormat:@"%02x", digest[i]];
    }
    return output;
}

@end
