//
//  YHOcrCameraController.h
//  SAPICameraLib
//
//  Created by Jagtu on 2020/5/26.
//  Copyright © 2020年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@class YHOcrCameraController;

@protocol YHCameraDelegate <AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>

@optional
- (void)cameraController:(YHOcrCameraController *)controller didChangeAuthorizationStatus:(AVAuthorizationStatus)status NS_AVAILABLE_IOS(7_0);

- (void)cameraController:(YHOcrCameraController *)controller didCatchError:(NSError *)error;

- (void)cameraController:(YHOcrCameraController *)controller didDetectFace:(AVMetadataFaceObject *)faceObject;

@end

@interface YHOcrCameraController : NSObject

@property (nonatomic, strong, readonly) AVCaptureSession *session;
@property (nonatomic, strong) AVCaptureStillImageOutput *stillCameraOutput;
@property (nonatomic, strong) AVCaptureVideoDataOutput *videoOutput;

@property (nonatomic, assign) AVCaptureDevicePosition cameraPosition;

@property (nonatomic, weak) id<YHCameraDelegate> delegate;

@property (nonatomic, strong) AVCaptureVideoPreviewLayer *previewLayer;

- (instancetype)initWithCameraPosition:(AVCaptureDevicePosition)position;

- (instancetype)initWithDelegate:(id<YHCameraDelegate>)delegate;

- (void)startRunningCamera;

- (void)stopRunningCamera;

- (void)switchCamera;

- (void)captureStillImageWithHandler:(void(^)(NSData *imageData))handler;

- (void)captureStillImageWithHandler:(void(^)(NSData *imageData))handler afterDelay:(NSTimeInterval)delay;

- (void)autofocusOnce:(CGPoint)point;

@end
