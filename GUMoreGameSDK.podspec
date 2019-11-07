Pod::Spec.new do |s|

  s.name         = "GUMoreGameSDK"
  s.version      = "1.0.0"
  s.summary      = "This is a development kit for display game application video."
  s.license      = "MIT"
  s.ios.deployment_target = '10.0'
  s.homepage     = "https://github.com/shenwawa/GUMoreGameSDK"
  s.author             = { "taeja" => "shenxstest@sina.com" }
  s.social_media_url   = "https://www.jianshu.com/u/27319193fc41"
  s.source       = { :git => "https://github.com/shenwawa/GUMoreGameSDK.git", :tag => s.version }
  s.source_files = 'GUMoreGameSDK.framework/Headers/*.{h}'
  s.requires_arc = true
  s.vendored_frameworks = 'GUMoreGameSDK.framework'
  s.frameworks = "Foundation", "UIKit"
  s.dependency 'MJExtension', '~> 3.2.1'
end
