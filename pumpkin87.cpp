#include <iostream>
using namespace std;

//多继承语法
//class子类：继承方式 父类1， 继承方式 父类2 ……  

class Base1
{
public:
    Base1() {
        m_A = 100;
    }
    int m_A;
};

class Base2
{
public:
    int m_B;
    Base2() {
        m_B = 200;
    }
};

class Son: public Base1, public Base2
{
public:
    int m_C;
    int m_D;
    Son() {
        m_C = 1;
        m_D = 2;
    }
};

int main()
{
    Son s;
    cout << sizeof(s) << endl;
    //当父类中出现同名成员，需要加作用域区分

    return 0;
}