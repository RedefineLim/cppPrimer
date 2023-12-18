#include <iostream>
using namespace std;

//静态成员和非静态成员出现同名，处理方式一致
//继承中的同名静态成员处理 

class Base
{
public:
    static int m_A; //类内声明，类外初始化
    static void func() {
        cout << "Base" << endl;
    }
};
int Base::m_A = 100;

class Son: public Base
{
public:
    static int m_A;
    static void func() {
        cout << "Son" << endl;
    }
};
int Son::m_A = 200;

int main()
{
    // //1、通过对象来访问数据
    // cout << "通过对象来访问" << endl;
    // Son s;
    // cout << s.m_A << endl;
    // cout << s.Base::m_A << endl;
    // //2、通过类名访问
    // cout << "通过类名访问 " << endl;
    // cout << Son::m_A << endl;
    // cout << Son::Base::m_A << endl;

    //1、通过对象访问
    Son s;
    s.func();
    s.Base::func();
    //2、通过类名访问
    Son::func();
    Base::func();
    Son::Base::func();

    return 0;
}

//同名静态成员处理方式和非静态处理方式一样，只不过有两种访问方式（通过对象和通过类名） 