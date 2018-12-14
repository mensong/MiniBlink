# 简介 Abstract

miniblink is a open source, one file, small browser widget base on chromium.

By using C interface, you can create a browser just some line code.

more information at https://weolar.github.io/miniblink/ or http://miniblink.net

----

miniblink是一个开源的、单文件、且目前已知的最小的基于chromium的，浏览器控件。

通过其导出的纯C接口，几行代码即可创建一个浏览器控件。

您可以通过官网https://weolar.github.io/miniblink/ 或http://miniblink.net 来获取更多的关于miniblink的信息。


----

# 特性 Features

- 极致小巧的体积 (small size)
- C++，C#，Delphi等语言调用 (support C++，C#，Delphi language to call)
- 内嵌Nodejs，支持electron (with Nodejs, can run electron)
- 随心所欲的定制功能、模拟环境 (simulate other browser environment)
- 支持Windows xp、npapi (support windows xp and npapi)
- 完善的HTML5支持，对各种前端库友好 (support HTML5, and friendly to front framework)
- 关闭跨域开关后，可以使用各种跨域功能 (support cross domain)
- 网络资源拦截，替换任意网站任意js为本地文件 (network intercept, you can replace any resource to local file)
- headless模式，极大节省资源，适用于爬虫 (headless mode, be suitable for Web Crawler)

----

# 文档 Document

关于miniblink的介绍见这篇文章：https://zhuanlan.zhihu.com/p/22611497?group_id=764036386641707008

API文档见：https://weolar.github.io/miniblink/doc-main.html 

----

# 使用 Usage
请前往https://github.com/weolar/miniblink49/releases 下载最新编译后的SDK，里面的demo_src是个完整的用例。

或者前往 https://github.com/weolar/mb-demo 下载

最简单的创建一个窗口：

**Usage**

```cpp
// 无边框窗体 borderless window
wkeWebView window = wkeCreateWebWindow(WKE_WINDOW_TYPE_TRANSPARENT, NULL, 0, 0, 640, 480);  
wkeLoadURLW(window, L"miniblink.net");
```
![demo-1](https://weolar.github.io/miniblink/assets/images/demo-0.gif)

# 编译 Build

直接打开“build\vs2015.bat”编译即可。注：若要编译64位MiniBlink，不能直接双击“miniblink.sln”打开工程，否则会出现“在第 2 遍中编译器的堆空间不足”这样的错误，参考：https://blog.csdn.net/andr0id/article/details/83899973 。

----

# mini-electron

mini-electron项目是一个基于miniblink的独立项目，旨在创建一个更小的electron运行环境。目前已经实现了这一目标。

通过替换mini-electron，打包完后的文件仅仅6m左右。

----

# 联系方式

大家有问题可以选择：

- 加Q群94093808

- 邮箱weolar@qq.com

- github里留言issue讨论

- 关注知乎专栏：https://zhuanlan.zhihu.com/chrome

----

# 致谢 Thanks

特别感谢网友zero，他是miniblink的代码的重要贡献者。

感谢网友core，感谢网友“大清知府”。

感谢网友boxue（ https://www.zhihu.com/people/coltor/ ），他致力于对miniblink架构的研究及推广。


