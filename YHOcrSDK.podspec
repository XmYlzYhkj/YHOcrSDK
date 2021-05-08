Pod::Spec.new do |s|
  s.name = "YHOcrSDK"
  s.version = "1.1.2"
  s.summary = "通用OCR图像文字识别组件."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"XmYhkj"=>"yhkj_xm@163.com"}
  s.homepage = "https://gitlab.ylzpay.com/ios/ios_component/YHOcrSDK.git"
  s.description = "卡证文字识别，基于业界领先的深度学习技术，提供对身份证、银行卡、营业执照等常用卡片及证照的文字内容进行结构化识别的服务."
  s.source = { :git => "https://github.com/XmYlzYhkj/YHOcrSDK.git", :tag => s.version.to_s }
  s.platform     = :ios, "9.0"
  s.requires_arc = true
  s.vendored_frameworks = ["Frameworks/YHOcrSDK.framework"]
  s.frameworks = 'UIKit', 'Foundation', 'SystemConfiguration', 'CoreGraphics', 'CoreMotion', 'QuartzCore', 'AVFoundation', 'AssetsLibrary', 'CoreMedia'
  s.libraries        = 'z', 'c++'
  s.resources    = 'Resources/*.bundle'
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
  s.user_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => '$(EXCLUDED_ARCHS__EFFECTIVE_PLATFORM_SUFFIX_$(EFFECTIVE_PLATFORM_SUFFIX)__NATIVE_ARCH_64_BIT_$(NATIVE_ARCH_64_BIT)__XCODE_$(XCODE_VERSION_MAJOR))',
    'EXCLUDED_ARCHS__EFFECTIVE_PLATFORM_SUFFIX_simulator__NATIVE_ARCH_64_BIT_x86_64__XCODE_1200' => 'arm64 arm64e armv7 armv7s armv6 armv8'
  }
end
