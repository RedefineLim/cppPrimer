#include <iostream>
#include <string>
using namespace std;

//关系运算符重载

class Person
{
private:
    string m_Name;
    int m_Age;
public:
    Person(string name, int age);
    bool operator==(Person& p);
};

Person::Person(string name, int age)
{
    m_Name = name;
    m_Age = age;
}

void test01()
{
    Person p1("Tom", 18);
    Person p2("Tom", 18);

    if(p1 == p2)
        cout << "p1和p2是相等的" << endl;
}

bool Person::operator==(Person& p)
{
    if(m_Name == p.m_Name && m_Age == p.m_Age)
        return true;
    else
        return false;
}

int main()
{
    test01();
    return 0;
}