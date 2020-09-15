//
//  YHOcrCameraPreviewView.h
//  SAPICameraLib
//
//  Created by Jagtu on 2020/6/7.
//  Copyright © 2020年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AVCaptureSession;

@interface YHOcrCameraPreviewView : UIView

@property (nonatomic, strong) AVCaptureSession *session;

@end
