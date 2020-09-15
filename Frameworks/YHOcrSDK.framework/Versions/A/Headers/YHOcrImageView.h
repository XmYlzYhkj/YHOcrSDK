//
//  YHOcrImageView.h
//  YHOcr
//
//  Created by Jagtu on 2020/8/9.
//  Copyright © 2020年 易惠.  All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CropAreaView : UIView

@end

@protocol YHOcrImageViewDelegate <NSObject>

- (void)imageViewScaleWithGes:(UIPinchGestureRecognizer *)sender;
- (void)imageViewMoveWithGes:(UIPanGestureRecognizer *)sender;

@end

@interface YHOcrImageView : UIView

@property ( weak , nonatomic) id <YHOcrImageViewDelegate> delegate;
@property (strong, nonatomic) CropAreaView *cropAreaView;
@property (strong, nonatomic) UIImage *toCropImage;
@property (assign, nonatomic) BOOL needScaleCrop;
@property (assign, nonatomic) BOOL showMidLines;
@property (assign, nonatomic) BOOL showCrossLines;
@property (assign, nonatomic) CGFloat cropAspectRatio;
@property (strong, nonatomic) UIColor *cropAreaBorderLineColor;
@property (assign, nonatomic) CGFloat cropAreaBorderLineWidth;
@property (strong, nonatomic) UIColor *cropAreaCornerLineColor;
@property (assign, nonatomic) CGFloat cropAreaCornerLineWidth;
@property (assign, nonatomic) CGFloat cropAreaCornerWidth;
@property (assign, nonatomic) CGFloat cropAreaCornerHeight;
@property (assign, nonatomic) CGFloat minSpace;
@property (assign, nonatomic) CGFloat cropAreaCrossLineWidth;
@property (strong, nonatomic) UIColor *cropAreaCrossLineColor;
@property (assign, nonatomic) CGFloat cropAreaMidLineWidth;
@property (assign, nonatomic) CGFloat cropAreaMidLineHeight;
@property (strong, nonatomic) UIColor *cropAreaMidLineColor;
@property (strong, nonatomic) UIColor *maskColor;
@property (strong, nonatomic) UIView *rectView;

@end
