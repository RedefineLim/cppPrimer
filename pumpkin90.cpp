#include <iostream>
using namespace std;

//多态内存模拟
//当父类的指针或者引用指向子类对象时候，发生多态

class Animal    //抽象类
{
public:
    virtual void roar() = 0;    //纯虚函数
};

class Cat: public Animal
{
public:
    void roar() {
        cout << "小猫在说咆哮" << endl;
    }
};

void doSpeak(Animal& animal)
{
    animal.roar();
}

//狗类
class Dog: public Animal
{
public:
    void roar() {
        cout << "小狗在咆哮" << endl;
    }
};

int main()
{
    // Cat cat;
    // //父类引用来接收一个子类对象
    // //如果想执行让猫咆哮，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
    // doSpeak(cat);

    // Dog dog;
    // doSpeak(dog);
    cout << sizeof(Animal) << endl;
    // cout << sizeof(int*) << endl;

    return 0;
}