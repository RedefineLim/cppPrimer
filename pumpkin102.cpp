#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class Person
{
public:
    T1 m_name;
    T2 m_age;
    Person(T1 name, T2 age) {
        m_name = name;
        m_age = age;
    }
    void show() {
        cout << m_name << endl << m_age << endl;
    }
};

void print(Person<string, int>& p) {    //最常用:指定传入类型
    p.show();
}

template<class T1, class T2>
void print2(Person<T1, T2>& p) {
    p.show();
}

template<class T>
void print3(T& p)
{
    p.show();
}

int main()
{
    Person<string, int> p("sunwokong", 1000);
    print(p);
    print2(p);
    print3(p);

    return 0;
}