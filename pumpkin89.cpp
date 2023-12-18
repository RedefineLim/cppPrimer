#include <iostream>
using namespace std;

//多态
//多态是C++面向对象三大特性之一 
//静态多态：函数重载和运算符重载。复用函数名
//动态多态：派生类和虚函数实现运行时多态

//实现动态多态

class Animal
{
private:

public:
    void roar() {
        cout << "动物在咆哮" << endl;
    }
};

class Cat: public Animal
{
public:
    void roar() {
        cout << "小猫在说话" << endl;
    }
};

void doSpeak(Animal& animal)
{
    animal.roar();
}

int main()
{
    Cat cat;
    //父类引用来接收一个子类对象
    doSpeak(cat);

    return 0;
}