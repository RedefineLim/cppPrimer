#include <iostream>
using namespace std;

//运算符重载
//成员函数重载加号
//全局函数重载加号

class Person
{
public:
    int m_A;
    int m_B;
    // Person operator+(Person& p);
};

// Person Person::operator+(Person& p)
// {
//     Person temp;
//     temp.m_A = this->m_A + p.m_A;
//     temp.m_B = this->m_B + p.m_B;
//     return temp;
// }

Person operator+(Person& p1, Person& p2)
{
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

Person test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    Person p2;
    p2.m_A = 10;
    p2.m_B = 10;

    Person p3 = p1 + p2;
    return p3;
}

Person test02()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    Person p2 = p1 + 10;
    return p2;
}

//运算符重载也可以发生函数重载

//函数重载版本
Person operator+(Person& p1, int num)
{
    Person temp;
    temp.m_A = p1.m_A + num;
    temp.m_B = p1.m_B + num;
    return temp;
}

int main()
{
    cout << test01().m_A << endl;
    cout << test01().m_B << endl;
    return 0;
}