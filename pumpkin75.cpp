#include <iostream>
using namespace std;

//左移运算符重载

class Person
{
    friend ostream& operator<<(ostream& cout ,Person p);
private:
    int m_A;
    int m_B;
public:
    Person(int a , int b);
};

Person::Person(int a , int b)
{
    m_A = a;
    m_B = b;
}

//不会利用成员函数重载<< 运算符，因为要保证cout在左侧
ostream& operator<<(ostream& cout ,Person p)   //输出流对象
{
    cout << "m_A = " << p.m_A << "\t" << "m_B = " << p.m_B;
    return cout;
}

//链式编程思想
void test01()
{
    Person p(10 ,10 );

    // cout << p.m_A << endl;
    cout << p << endl;
}

int main()
{
    test01();

    return 0;
}