#include <iostream>
using namespace std;

//继承同名成员的处理方式

class Base
{
public:
    Base() {
        m_A = 100;
    }
    int m_A;
    void func() {
        cout << "Base 调用 func" << endl;
    }
};

class Son: public Base
{
public:
    Son() {
        m_A = 200;
    }
    int m_A;
    void func() {
        cout << "Son 调用 func" << endl;
    }
};

//同名函数成员属性的处理方式 
void test01()
{
    Son s;
    cout << s.m_A << endl;
    //如果通过子类对象访问基类中的同名成员，需要加作用域
    cout << s.Base::m_A << endl;
}

//同名成员函数的处理方式
void test02()
{
    Son s;
    s.func();
    //如果通过子类对象访问基类中的同名函数，需要加作用域
    s.Base::func();
}
//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉弗雷德所有同名成员函数
//如果想访问到父类中被隐藏的同名成员函数， 需要添加作用域
int main()
{
    test01();
    test02();
    return 0;
}