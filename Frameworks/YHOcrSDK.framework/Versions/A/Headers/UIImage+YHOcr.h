//
//  UIImage+YHOcr.h
//  YHOcrSdk
//
//  Created by Jagtu on 2020/4/13.
//  Copyright © 2020年 易惠.  All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface UIImage (YHCameraAddition)

+ (UIImage *)yhocr_camera_imageFromSampleBuffer:(CMSampleBufferRef)sampleBuffer;

- (UIImage *)yhocr_camera_imageCropRect:(CGRect)rect;

- (UIImage *)yhocr_camera_imageScaledToSize:(CGSize)newSize;

- (UIImage *)yhocr_camera_fixOrientation;

+ (UIImage *)yhocr_camera_rotateImageEx:(CGImageRef)imgRef byDeviceOrientation:(UIDeviceOrientation)deviceOrientation;

+ (UIImage *)yhocr_camera_rotateImageEx:(CGImageRef)imgRef orientation:(UIImageOrientation) orient;

@end
