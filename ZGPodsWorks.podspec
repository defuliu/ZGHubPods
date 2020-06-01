#
# Be sure to run `pod lib lint ZGPodsWorks.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ZGPodsWorks'
  s.version          = '0.1.1'
  s.summary          = 'ZGPodsWorks.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description  = 'ZGPodsWorks 封装了一些工具类,基础类,宏'

  s.homepage         = 'https://github.com/defuliu/ZGPodsWorks'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'defuliu' => 'liudefu@china.zhaogang.com' }
  s.source           = { :git => 'https://github.com/defuliu/ZGPodsWorks.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  #s.source_files = 'ZGPodsWorks/Classes/**/*'
  s.subspec 'Model' do |model|
   model.source_files = 'ZGPodsWorks/Classes/Model/**/*.{swift,h,m,c}'
  end
  
  # s.resource_bundles = {
  #   'ZGPodsWorks' => ['ZGPodsWorks/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
