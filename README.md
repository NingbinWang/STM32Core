# STM32Core
在这个仓库中，主要是设计一个比较小巧的STM32的核心板，主要是用于对于STM32的一些功能设计，主要验证的功能为CAN的收发。

# 硬件设计
硬件设计上，空的mcu用STLink或者是Jlink的方式来烧录，节约烧录的资源，同时要把USB转串口引出来，支持CAN，IMU，OLED这3个功能，TypeC的USB口另外一路支持需要USB口，用于后续的虚拟下载功能。


# 软件设计
虽然官方的STM32Cube的功能，很强大，但其也就仅仅支持C语言，个人认为还需要支持C++的混编，毕竟虚拟函数还是很有用处的，所以支持PlatFromIO,用于编译C++.

## 软件主要功能
* IMU功能
* CAN总线交互
* 卡尔曼滤波功能
* 串口传输IMU数据做数据示波器
* 虚拟USB功能

## 软件版本功能


## Vscode与STM32CubeMX的支持
目前该项目的firmware经过我的修改支持了从platformio架构来支持编译，直接使用VSCODE打开就可以了，当然是需要加入PlatFromIO的插件