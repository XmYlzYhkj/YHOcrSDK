Pod::Spec.new do |s|
  s.name = "YHOcrSDK"
  s.version = "0.1.1"
  s.summary = "通用OCR图像文字识别组件."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"XmYhkj"=>"yhkj_xm@163.com"}
  s.homepage = "https://gitlab.ylzpay.com/ios/ios_component/YHOcrSDK.git"
  s.description = "卡证文字识别，基于业界领先的深度学习技术，提供对身份证、银行卡、营业执照等常用卡片及证照的文字内容进行结构化识别的服务."
  s.source = { :git => "https://github.com/XmYlzYhkj/YHOcrSDK.git", :tag => s.version.to_s }
  s.platform     = :ios, "8.0"
  s.requires_arc = true
  s.vendored_frameworks = ["Frameworks/YHOcrSDK.framework"]
  s.frameworks       = 'SystemConfiguration', 'CoreGraphics', 'Foundation', 'UIKit'
  s.libraries        = 'z', 'c++'
end
