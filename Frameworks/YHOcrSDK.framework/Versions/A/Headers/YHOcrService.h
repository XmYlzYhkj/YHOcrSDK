//
//  YHOcrService.h
//  YHOcrSDK
//
//  Created by Jagtu on 2020/8/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YHOcrService : NSObject

+ (instancetype)shardService;

+ (NSError *)aipErrorWithCode:(NSInteger)code andMessage:(NSString *)message;

/**
 * 使用Api Key, Secret Key授权
 */
- (void) authWithAK: (NSString *)ak andSK: (NSString *)sk;

@end

NS_ASSUME_NONNULL_END
