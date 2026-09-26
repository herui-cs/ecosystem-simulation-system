// 狼类的实现

#include "../../include/animals/wolf.h"

#include <iostream>

// 成员函数中直接使用类的属性名来访问属性值，具体实现依赖于隐式指针 *this
Wolf::Wolf(const std::string& wolfName, int wolfAge) {
    name = wolfName;
    sex = false;
    age = wolfAge;
    health = 100;
    hunger = 0;
    x = 0;
    y = 0;
}

void Wolf::Move(int dx, int dy) {
    x += dx;
    y += dy;
    hunger += 5;
}

void Wolf::Eat(int food) {
    hunger -= food;
    if (hunger < 0) {
        hunger = 0;
    }
}

void Wolf::GrowOlder() {
    age++;
    hunger += 10;
    if (hunger > 100) {                 // 过度饥饿会伤害健康
        health -= 10;       
    }
}

void Wolf::PrintStatus() const {
    std::cout << "Wolf: " << name 
              << '\n'
              << "Age: " << age 
              << '\n'
              << "Health: " << health 
              << '\n'
              << "Hunger: " << hunger 
              << '\n'
              << "Position: (" << x << ", " << y 
              << ")\n";
}
