# GUMoreGameSDK Description!

This is a development kit for display game application video


# GUMoreGameSDK Usage!

### 开始使用GUMoreGameSDK

>在你开始集成SDK之前，请检查你的本地配置。
目前GUMoreGameSDK支持iOS 10.0及更高版本, Xcode支持9.0及更高版本。

------------

### 第一步： 将GUAdsSDK添加到project中

GUMoreGameSDK是支持CocoaPods的，所有可以使用CocoaPods集成，当然也可以通过手动集成。

#### 使用CocoaPods快速集成SDK：
CocoaPods是Objective-C或Swift的依赖管理工具，使用CocoaPods可以自动化集成三方依赖。如果想对CocoaPods有更多的了解，请访问Cocoapods官网。使用CocoaPods快速集成GUMoreGameSDK，首先打开Terminal，然后输入以下命令，进入到项目的根目录下，
```
cd /your project full path.
```
然后输入以下命令，创建```Podfile```，并打开编辑，
```
pod init

open Podfile
```

然后复制粘贴以下内容:

```
platform :ios, '10.0'

target 'YOUR_PROJECT_NAME' do
  
  use_frameworks!

  pod 'GUMoreGameSDK', '~> 1.0.2'  //最新版本为1.0.2

end

```
保存并退出，在terminal上进入到工程目录下，输入命令``pod install``，开始安装``GUMoreGameSDK``。安装成功后，输入``open yourProjectName.xcworkspeace``，打开Xcode。
#### 手动集成SDK:
1.  点击下载[GUMoreGameSDK](https://gu-sdk-assets.oss-cn-shenzhen.aliyuncs.com/moregame/ios/GUMoreGameSDK.framework_1.0.2.zip)

2. 下载``GUMoreGameSDK``，然后将``GUMoreGameSDK.framework``拖到你的工程目录中去。

3.  由于``GUMoreGameSDK``中使用到了``Categroy``，所有我们需要在工程中配置``Other linker Flag``。具体步骤为：
Build Setting --> Linking --> Other Linker Flags: -ObjC

4. 由于``GUMoreGameSDK``是不支持bitcode的，所有我们还需要在工程配置中将`Enable bitcode`设置为``NO``。具体步骤为：
Build Setting --> bitcode --> Enable bitcode: NO。

5. 传输安全设置，在工程目录中找到``info.plist``文件，点击鼠标右键，选择``Open as``, 继续选择``Source code``，然后复制粘贴下面xml代码：
```
<key>NSAppTransportSecurity</key>
	<dict>
		<key>NSAllowsArbitraryLoads</key>
		<true/>
	</dict>
```
至此你已经成功创建并配置好了一个空的GUMoreGameSDK测试工程。🍺😃！

### 第二步： 初始化GUMoreGameSDK

#### 1. iOS13的是适配

打开上面创建好的空的测试工程，commad + R 编译工程，此时在``AppDelegate.m``和``SceneDelegate.m``(Swift工程则是``AppDelegate.swift``和``SceneDelegate.swift``)文件中有几个报错，这是因为在iOS13中，apple为了优化app启动速度，开创了了一个种新的多场景切换机制，如果想了解更多，可到官方查阅相关文档，这里不再赘述。
上述报错解决办法：
由于我们的GUMoreGame最低是支持iOS 10.0的，所以这里建议开发者，将Target --> General --> Deployment info中的target版本修改为iOS10.0，然后分别在``AppDelegate.m``和``SceneDelegate.m``中的报错的方法名后面添加
```
API_AVAILABLE(ios(13.0))
```
如果是Swift，则在``AppDelegate.swift``和``SceneDelegate.swift``中的报错的方法名上面添加
```
@available(iOS 13.0, *)
```
然后command + B，编译就会成功了。（备注：其实点击报错方法名后面的红圈，然后点击fix按钮，上述辨版本标识会自动添加。）

最后，由于我们的测试应用是单场景应用，所以我们需要在``AppDelegate.h``添加一个UIWindow属性，确保工程启动会自动加载``main.storyboard``。如果是Swift则在``AppDelegate.swift``添加UIWindow属性。代码如下:
```
#Objective-C
#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, strong) UIWindow *window;

@end
```

```
#Swift
import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?
    //Application life cycle functions
	...
}
```

#### 2. SDK的初始化
打开``AppDelegate.m``或者``AppDelegate.swift``，引入SDK头文件，然后初始化SDK, 如果你只是想用于测试，这里我们提供一个测试api_key

``
api_key: Jmwy7JqsZ3kX6YEDpzzpS6V9oex7CvQG
``

```
#Objective-C
#import <GUMoreGameSDK/GUMoreGameSDK.h>

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    [[GUMGManager shared] startMoreGameWithApiKey:@"YOUR_APIKEY"];
    return YES;
}
```

```
#Swift
import GUMoreGameSDK

func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        
        GUMGManager.shared().startMoreGame(withApiKey: "YOUR_APIKEY")
        return true
    }
}
```

初始化方法调用之后，commad + R运行工程，如果控制台打印出一下内容，说明你已经成功集成了GUMoreGameSDK。
```
2019-10-24 17:01:57.286659+0800 GUMoreGameSDK[3016:429131] ---------- Success message! ----------
2019-10-24 17:01:57.286748+0800 GUMoreGameSDK[3016:429131] GUMoreGameSDK initialize success!
2019-10-24 17:01:57.286780+0800 GUMoreGameSDK[3016:429131] The SDK version is 1.0.0
2019-10-24 17:01:57.286812+0800 GUMoreGameSDK[3016:429131] --------------------------------------
```

#### 3. 播放广告视频
打开``UIViewController.m``或者是``UIViewController.swift``， 然后再viewDidLoad中添加如下代码:
```
#Objective-C
#import <GUMoreGameSDK/GUMoreGameSDK.h>

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    
    //如果你想自定义尺寸
    //GUMGSize size = GUMGSizeFromCGSize(CGSizeMake(180, 210));
    [[GUMGManager shared] setMoreGameShowProductStyle:GUMGShowProductStyleNative];
    //在showVideo之前，建议先隐藏之前的video，此步骤是为了确保videoPlayer被完全释放。
    [[GUMGManager shared] hideMoreGameVideoADs];
    [[GUMGManager shared] showMoreGameVideoAdsWithAdsSit:self.adsSit size:kGUMGSizeNormal position:GUMGPositionMiddleCenter rootViewController:self];
    //如果你想自定义位置，上面position参数你就需要传:GUMGPositionCustom，然后下面一行代码的注释打开
    //[[GUMGManager shared] setCustomPosition:CGPointMake(0, 200)];
}

```

```
#Swift
import GUMoreGameSDK

override func viewDidLoad() {
	super.viewDidLoad()
    view.backgroundColor = .white

    //如果你想自定义尺寸，在代开下行注释代码，并修改你想自定义的size的值
    //let size = GUMGSizeFromCGSize(CGSize(width: 180, height: 210))
	GUMGManager.shared().setMoreGameShowProductStyle(.native)
	//在showVideo之前，建议先隐藏之前的video，此步骤是为了确保videoPlayer被完全释放。
	GUMGManager.shared().hideMoreGameVideoADs()

	GUMGManager.shared().showMoreGameVideoAds(withAdsSit: "ADS_SITE", size: kGUMGSizeNormal, position: .middleCenter, rootViewController: self)
	//如果你想自定义位置，上面position参数你就需要传:GUMGPositionCustom，然后下面一行代码的注释打开
	//GUMGManager.shared().setCustomPosition(CGPoint(x: 0, y: 200))
}

```
OK，到了这一步，编译运行你的项目，视图上将播放精彩的more game广告视频，尽情的享受的。😃
