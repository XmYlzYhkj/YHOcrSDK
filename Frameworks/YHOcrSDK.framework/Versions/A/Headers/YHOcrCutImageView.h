//
//  YHOcrCutImageView.h
//  YHOcr
//
//  Created by Jagtu on 2020/8/9.
//  Copyright © 2020年 易惠.  All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "YHOcrImageView.h"

@protocol YHOcrImageDelegate <NSObject>
@optional

- (void)YHCutImageBeginPaint;
- (void)YHCutImageScale;
- (void)YHCutImageMove;
- (void)YHCutImageEndPaint;

@end

@interface YHOcrCutImageView : UIView <UITextViewDelegate,YHOcrImageViewDelegate>

@property (nonatomic, assign)   id<YHOcrImageDelegate>   imgDelegate;
@property (nonatomic, retain)   NSString                  *strSelectContent;
@property (nonatomic, strong)   UIImageView               *bgImageView;
@property (nonatomic, assign)   BOOL                      isImageFromLib;
//截图的分辨率系数 开发者可自行配置
@property (nonatomic, assign)   CGFloat                   scale;

//设置页面图片
- (void)setBGImage:(UIImage *)aImage fromPhotoLib:(BOOL)isFromLib useGestureRecognizer:(BOOL)isUse;

- (UIImage *)cutImageFromView:(UIImageView *)theView withSize:(CGSize)ori atFrame:(CGRect)rect;

@end
