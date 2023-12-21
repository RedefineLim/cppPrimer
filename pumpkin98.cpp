#include <iostream>
using namespace std;

//模板函数的局限性
//模板并不是万能的，有些特定数据类型，需要用具体化的方式做特殊实现

class Person
{
public:
    Person(string name, int age) {
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};

template<typename T>
bool my_cmp(T& a, T& b)
{
    if(a == b)
        return true;
    else
        return false;
}

template<> bool my_cmp(Person& p1, Person& p2)
{
    if((p1.m_age == p2.m_age) && (p1.m_name == p2.m_name))
        return true;
    else
        return false;
}

int main()
{
    // int a = 10;
    // int b = 20;
    // if(my_cmp(a, b))
    //     cout << "==" << endl;
    // else
    //     cout << "!=" << endl;
    Person p1("Tom", 12);
    Person p2("Tom", 12);
    if(my_cmp(p1, p2))
        cout << "==" << endl;
    else
        cout << "!=" << endl;

    return 0;
}