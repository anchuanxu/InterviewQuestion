//
// Created by 安传旭 on 2019/4/10.
// C++ 各种类型的成员变量初始化方法
#pragma once
class Test
{
private :
    int var1;
    // int var11= 4; 错误的初始化方法
    const int var2 ;
    // const int var22 =22222; 错误的初始化方法
    static int var3;
    // static int var3333=33333; 错误，只有静态常量int成员才能直接赋值来初始化
    static const int var4=4444; //正确，静态常量成员可以直接初始化
    static const int var44;
public:
    Test(void);
    ~Test(void);
};
--------------------Test.cpp-----------------------------------
#include ".\test.h"

int Test::var3 = 3333333; //静态成员的正确的初始化方法

// int Test::var1 = 11111;; 错误静态成员才能初始化
// int Test::var2 = 22222; 错误
// int Test::var44 = 44444; // 错误的方法，提示重定义
Test::Test(void)：var1(11111),var2(22222)正确的初始化方法//var3(33333)不能在这里初始化
{
var1 =11111; //正确, 普通变量也可以在这里初始化
//var2 = 222222; 错误，因为常量不能赋值，只能在 "constructor initializer （构造函数的初始化列表）" 那里初始化

var3 =44444; //这个赋值是正确的，不过因为所有对象一个静态成员，所以会影响到其他的，这不能叫做初始化了吧
}
Test::~Test(void){}


