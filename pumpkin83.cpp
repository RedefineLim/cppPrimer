#include <iostream>
using namespace std;

//继承中的对象模型

class Base
{
private:
    int m_C;
protected:
    int m_B;
public:
    int m_A;
};

class Son: public Base
{
public:
    int m_D;
};

int main()
{
    //父类中所有非静态成员属性都会被子类继承下去
    //父类中的私有成员属性，是被编译器给隐藏了，因此访问不到，但却是是被继承了下去
    cout << sizeof(Son) << endl;

    return 0;
}