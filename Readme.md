# Readme

[TOC]

## 介绍

本项目基于Qt5.12.2编写的一个密码管理器(AlicCodeManager),为鄙人的一个平常使用的一个密码管理器.本项目由于是本人一人完成,更新、优化和界面等相较于其他的开源软件可能会差很多.

本项目为免费开源,如有需用,请注明来源.

## 使用说明

目前还没有导出exe,还只供用Qt的人员使用.

config文件里面是记录登录信息的,这里的文件请保持不动.

userinf文件夹里的文件是生成的密码存储文件,后缀为psw

resource是相应的资源文件,但由于之前存在一定的bug,这里的资源文件并没有进行配置.

在一开始是一个登陆界面,第一行为账户,第二行为密码,请保证你记得你的密码.目前不支持忘记密码的操作.

![image-20240525144955336](resource/picture/image-20240525144955336.png)

然后一个这样的界面,在v1.0.0版本为了更快的开机速度,并不会对基本见面进行加载,需要手动更新.

![image-20240525150043915](resource/picture/image-20240525150043915.png)

## 注释说明

由于本程序是一个开源文件,且之后会时不时更新,为了方便大家和自己,我在这里把注释写好,并且把注释的格式在这里说明.

### 文件说明

```C++
/**
 * @Name 文件名
 * @Function 文件作用
 * @List 变量列表[1]:含义
 *		 变量列表[2]:含义	
 * @Author 作者名
 */
```

### 函数

```C++
/**
 * @Name 函数名
 * @Function 函数作用
 * @List 参数列表[1]:含义
 *		 参数列表[2]:含义	
 * @Author 作者名
 */
```

### 简短说明

```C++
//@Inf 说明
```

### 实现逻辑

```C++
/*
 *
 *
```

## 各种信息



## 更新介绍

|  版本  |                           更新内容                           |   时间    |
| :----: | :----------------------------------------------------------: | :-------: |
| v1.0.0 |            完成对密码管理器的基本配置.未进行优化             | 2024/5/25 |
| v1.0.2 |     完成基本打包准备(存在安装程序有问题,不支持中文地址)      | 2024/5/30 |
| v1.4.0 |      打包完成,增加一个(虚假的)图标,可以支持windows托盘       | 2024/6/16 |
| v1.5.1 | 完成随机密码的部分,避免一次打开多个的问题,修复新增或者修改的时候不输入内容仍更新的bug | 2024/6/28 |
| v1.5.2 |                         完善应用提示                         | 2024/7/6  |

如果感觉有用还请点个星.
