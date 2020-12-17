//
//  YHOcrCaptureCardVC.h
//  OCRLib
//  卡片识别VewController
//  Created by Jagtu on 2020/11/9.
//  Copyright © 2020年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, CardType) {
    
    CardTypeIdCardFont = 0,
    CardTypeIdCardBack,
    CardTypeBankCard,
    CardTypeLocalIdCardFont ,
    CardTypeLocalIdCardBack,
    CardTypeLocalBankCard
};

@interface YHOcrCaptureCardVC : UIViewController

@property (nonatomic, assign) CardType cardType;
@property (nonatomic, copy) void (^handler)(UIImage *,YHOcrCaptureCardVC *);

-(void)setTips:(NSString *)tips;

+(UIViewController *)ViewControllerWithCardType:(CardType)type andImageHandler:(void (^)(UIImage *image,YHOcrCaptureCardVC *vc))handler;

@end
