#include <iostream>
#include <string>
using namespace std;

//类模板和函数模板的区别
//1、类模板没有自动类型推导的使用方式
//2、类模板在模板参数列表中可以有默认参数

template<class NameType ,class AgeType = int>   //函数模板不允许这样写
class Person
{
public:
    NameType m_name;
    AgeType m_age;
    Person(NameType name, AgeType age) {
        m_name = name;
        m_age = age;
    }
    void show() {
        cout << m_name << endl << m_age << endl;
    }
};

int main()
{
    Person<string> p("孙悟空", 1000);
    p.show();

    return 0;
}