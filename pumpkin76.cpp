#include <iostream>
using namespace std;

//递增运算符的重载

class MyInteger
{
    friend ostream& operator<<(ostream& cout , MyInteger myint);
private:
    int m_Num;
public:
    MyInteger();
    //重载前置++
    MyInteger& operator++();
    //重载后置++
    MyInteger operator++(int);   //int代表占位参数，可以用于区分前置++与后置++
};

MyInteger::MyInteger()
{
    m_Num = 0;
}

ostream& operator<<(ostream& cout , MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}

MyInteger MyInteger::operator++(int)
{
    //先记录当时结果
    MyInteger temp = *this;
    //后置递增
    ++m_Num;
    return temp;
}

//重载前置++运算符
MyInteger& MyInteger::operator++()
{
    //先进行++运算，再将自身返回
    ++m_Num;
    return *this;
}
//重载后置++运算符

void test01()
{
    MyInteger myint;

    cout << ++myint << endl;
    cout << myint++ << endl;
    cout << myint << endl;
}

int main()
{
    test01();
    return 0;
}