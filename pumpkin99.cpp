#include <iostream>
#include <string>
using namespace std;

//类模板
template<class NameType,class AgeType>
class Person
{
public:
    NameType m_name;
    AgeType m_age;
    Person(NameType name, AgeType age) {
        m_name = name;
        m_age = age;
        cout << m_name << endl << m_age << endl;
    }
};

int main()
{
            //模板参数列表
    Person<string, int> p1("sunwukong", 999);

    return 0;
}