//
//  YHOcrDisplayLink.h
//  YHOcrSdk
//
//  Created by Jagtu on 2020/8/7.
//  Copyright © 2020年 易惠.  All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@class YHOcrDisplayLink;

@protocol YHOcrDisplayLinkDelegate <NSObject>

@required

- (void)displayLinkNeedsDisplay:(YHOcrDisplayLink *)displayLink;

@end

@interface YHOcrDisplayLink : NSObject


+ (instancetype)displayLinkWithDelegate:(id<YHOcrDisplayLinkDelegate>)delegate;


@property (nonatomic, weak) id<YHOcrDisplayLinkDelegate> delegate;


- (void)start;

- (void)stop;

@end
