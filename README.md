Sample code for cocos2d-x backed animation in android fragment
===================
This repo is forked from [splhack/Hello-LWF-Cocos2d-x](https://github.com/splhack/Hello-LWF-Cocos2d-x) and is the sample code for [this blog post](http://tech.glowing.com/cn/nurture-an-zhuo-ban-zhong-de-ying-er-dong-hua-shi-zen-yao-shi-xian-de/), which explains how to use cocos2d-x to support animations in a fragment.

How to use
---
If you just want to run the demo. Open the project under `BabyAnimationDemo`.

To modify the animation part, you can:

1. Open the project under `proj.ios_mac` or `proj.win32`;
2. Make changes. Note that if you added or removed C++ files, `Android.mk` should also be updated;
3. Run `./build_native.py -b release` under `proj.android` to compile for android platform;
4. Copy files under `proj.android/libs/` to `BabyAnimationDemo/app/src/main/libs/`;
5. Re-run `BabyAnimationDemo`


在 Android Fragment 中使用 Cocosd-x 的示例代码
===================
该项目是从 [splhack/Hello-LWF-Cocos2d-x](https://github.com/splhack/Hello-LWF-Cocos2d-x) fork 出来的。是[这一篇 Blog ](http://tech.glowing.com/cn/nurture-an-zhuo-ban-zhong-de-ying-er-dong-hua-shi-zen-yao-shi-xian-de/)的示例代码。

如何使用
---
如果你只是想要打开看看效果，打开 `BabyAnimationDemo` 下的项目。

如果要对动画部分作出更改：

1. 打开 `proj.ios_mac` 或 `proj.win32` 下的项目;
2. 作出更改。 注意，如果你添加或删除了 C++ 的源文件, `Android.mk` 也需要做相应的更新;
3. 在 `proj.android` 目录下运行 `./build_native.py -b release` 进行编译;
4. 将 `proj.android/libs/` 目录下的文件拷贝到 `BabyAnimationDemo/app/src/main/libs/`;
5. 重新运行 `BabyAnimationDemo`