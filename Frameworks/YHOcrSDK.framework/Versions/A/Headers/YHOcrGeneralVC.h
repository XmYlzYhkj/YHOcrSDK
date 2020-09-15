//
//  YHOcrGeneralVC.h
//  OCRLib
//
//  Created by Jagtu on 2020/8/16.
//  Copyright © 2020年 易惠.  All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YHOcrGeneralVC : UIViewController


@property (nonatomic, copy) void (^handler)(UIImage *);

+(UIViewController *)ViewControllerWithHandler:(void (^)(UIImage *image))handler;

@end
