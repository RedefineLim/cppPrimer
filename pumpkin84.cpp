#include <iostream>
using namespace std;

//继承中构造和析构顺序 

class Base
{
public:
    Base() {
        cout << "Base 构造函数" << endl;
    }
    ~Base() {
        cout << "Base 析构函数" << endl;
    }
};

class Son: public Base
{
public:
    Son() {
        cout << "Son 构造函数" << endl;
    }
    ~Son() {
        cout << "Son 析构函数" << endl;
    }
};

void test01()
{
    // Base b;
    Son s;
    //继承中的构造顺序和析构顺序 
    //先构造基类，再构造派生类，再析构派生类，再析构父类
}

int main()
{
    test01();
    return 0;
}