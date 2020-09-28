#
# Be sure to run `pod lib lint SpaaSDK-Pod.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SpaaSDK'
  s.version          = '0.0.1'
  s.summary          = 'A short description of SpaaSDK.'
  s.platform         = :ios, '11.0'

  s.description      = <<-DESC
移动端广告和TV大屏广告通过“高光广告”整合为跨屏实时联投，广告品效合一的解决方案。
DESC

  s.homepage         = 'http://www.hiliad.com/'

  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'hiliad' => 'aili@hiliad.com' }
  s.source           = { :git => 'https://github.com/hanliang-tech/SpaaSDK', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'

  s.vendored_frameworks = 'SpaaSDK.framework'
  s.dependency 'AFNetworking', '~> 4.0'
  s.dependency 'SDWebImage', '~> 5.0'
end
