# STM32Core
在这个仓库中，主要是设计一个比较小巧的STM32的核心板，主要是用于对于STM32的一些功能设计，主要验证的功能为CAN的收发。

# 硬件设计
硬件设计上，空的mcu用STLink或者是Jlink的方式来烧录，节约烧录的资源，同时要把USB转串口引出来，支持CAN，IMU，OLED这3个功能，TypeC的USB口另外一路支持需要USB口，用于后续的虚拟下载功能。

## PCB
目前已经回板了，但背面有关WIFI部分，因为自己的粗心，导致贴片的口有复压的情况。目前已经在最新的硬件上做了修改，待后续打板来验证WIFI。

# 软件设计
在软件支持上，除了STM32CubeIDE,还可以支持PlatFormIO,这个具体如何支持可以看[AlientekSample](https://github.com/NingbinWang/AlientekSample), 虽然这个项目已经因硬件停止更新了，但里面的软件VSCODE支持还是可以借鉴的。

## 软件主要功能
* IMU功能
* CAN总线交互
* 卡尔曼滤波功能
* 串口传输IMU数据做数据示波器
* 虚拟USB功能

## 软件版本功能
目前会在V1.0的板子上验证MPU6050与CAN的功能。

## Vscode与STM32CubeMX的支持
目前该项目的firmware经过我的修改支持了从platformio架构来支持编译，直接使用VSCODE打开就可以了，当然是需要加入PlatFromIO的插件

# 参考
