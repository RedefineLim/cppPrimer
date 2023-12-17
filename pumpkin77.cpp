#include <iostream>
using namespace std;

//赋值运算符的重载

class Person
{
private:
    int* m_Age;
public:
    Person(int age);
    ~Person();
    void Show() const;
    Person& operator=(Person& p);
};

Person::Person(int age)
{
    m_Age = new int(age);
}

Person::~Person()
{
    if(m_Age != NULL)
    {
        delete m_Age;
        m_Age = NULL;
    }
}

void Person::Show() const
{
    cout << *m_Age << endl;
}

Person& Person::operator=(Person& p)
{
    if(m_Age != NULL)
    {
        delete m_Age;
        m_Age = NULL;
    }
    m_Age = new int(*p.m_Age);
    return *this;
}

void test01()
{
    Person p1(18);
    Person p2(20);

    p1.Show();
    p2.Show();
    p1 = p2;
    p1.Show();
}

int main()
{
    test01();

    return 0;
}