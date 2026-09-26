// 狼类的声明

// #ifndef WOLF_H
// #define WOLF_H
// ...
// #endif 为头文件保护(Header Guard)，防止一个头文件被重复包含
// 也可以只在开头写一行 #pragma once
#ifndef WOLF_H
#define WOLF_H

#include <string>

class Wolf {

// 访问修饰符(AccessModifier)用来控制类成员(成员变量和成员函数)的访问权限
// private　   私有成员只能在类的内部访问，类的外部无法直接访问。若未指定访问修饰符，默认的访问级别为 private。
// public　    公有成员可以在类的内部和外部访问。
// protected　 受保护成员能在类的内部以及该类的派生类中访问。

public:
    // 构造函数(Constructor)Wolf ，专门用于在对象"出生"时初始化对象，属于特殊成员函数
    // 构造函数名与类名相同，不能有返回值，创建对象时系统自动调用
    // 此处只有构造函数的声明(Declaration)，意思是告诉编译器：Wolf 有这么一个函数
    // 具体实现放在 wolf.cpp
    Wolf(const std::string& wolfName, int wolfAge);                 // const std::string& name 可以理解为只读地引用一个字符串，避免复制字符串

    // 其余普通成员函数
    void Move(int dx, int dy);
    void Eat(int food);
    void GrowOlder();
    void PrintStatus() const;                                       // 常成员函数，const保证这个函数不会修改当前对象

private:
    std::string name;
    bool sex;
    int age;
    int health;
    int hunger;
    int x;
    int y;
};

#endif