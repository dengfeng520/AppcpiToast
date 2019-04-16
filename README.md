<h1>AppcpiToast</h1>


--

**AppcpiToast是一个自定义的iOS提示插件Class,支持iOS 9之后的版本**

--
<h3>Adding AppcpiToast to your project</h3>
<h3>CocoaPods</h3>

 **CocoaPods is the recommended way to add APPCPIToast to your project.**

* 1、Add a pod entry for `AppcpiToast` to your project Podfile 

```
pod 'AppcpiToast'
```
or

```
pod 'AppcpiToast', :git => 'https://github.com/dengfeng520/AppcpiToast'
```
 
* 2、Install the pod by running `pod install`.

* 3、 Include APPCPIToast wherever you need it with `#import "AppcpiToastView+Category.h"`

--
<h3>Usage</h3>

```
#import "AppcpiToastView+Category.h"
```

```
 AppcpiToastView *toastView = [AppcpiToastView showLTToastViewAnimation:self.view toastWithFrame:CGRectMake(10, 80, 120, 60) isAnimation:YES];
 toastView.backViewRadius = 5;
 toastView.titleChar = @"test test";

```

```
dispatch_async(dispatch_get_global_queue( DISPATCH_QUEUE_PRIORITY_LOW, 0), ^{
        // time-consuming operation
        dispatch_async(dispatch_get_main_queue(), ^{
            
            [AppcpiToastView hiddenLTToastViewAnimation:self.view isAnimation:YES];
        });
    });
```