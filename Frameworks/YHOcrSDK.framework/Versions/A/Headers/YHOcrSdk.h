//
//  YHOcrSdk.h
//  YHOcrSdk V0.1.1 Update by 2020/12/17.
//
//  Created by Jagtu.
//  Copyright © 2020年 易惠.  All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for YHOcrSdk.
FOUNDATION_EXPORT int YHOcrSdkVersionNumber;

//! Project version string for YHOcrSdk.
FOUNDATION_EXPORT NSString *const YHOcrSdkVersionString;

// In this header, you should import all the public headers of your framework using statements like #import <YHOcrSdk/PublicHeader.h>

#if __has_include(<YHOcrSdk/YHOcrGeneralVC.h>)
    #import <YHOcrSdk/YHOcrGeneralVC.h>
#else
    #import <YHOcrGeneralVC.h>
#endif

#if __has_include(<YHOcrSdk/YHOcrGeneralVC.h>)
    #import <YHOcrSdk/YHOcrCaptureCardVC.h>
#else
    #import <YHOcrCaptureCardVC.h>
#endif

#if __has_include(<YHOcrSdk/YHOcrGeneralVC.h>)
    #import <YHOcrSdk/YHOcrService.h>
#else
    #import <YHOcrService.h>
#endif



