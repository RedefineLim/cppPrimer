#include <iostream>
using namespace std;

//菱形继承

class Animal
{
public:
    int m_Age;
};
//利用虚继承 解决菱形继承问题 
//继承之前 加上关键字virtual变为虚继承
//Animal类成为虚基类    vbptr---->指针

class Sheep: virtual public Animal
{

};

class Camel: virtual public Animal
{

};

class SheepCamel: public Sheep, public Camel
{

};

int main()
{
    SheepCamel sc;
    sc.Sheep::m_Age = 18;
    sc.Camel::m_Age = 28;

    cout << sc.Sheep::m_Age << endl;
    cout << sc.Camel::m_Age << endl;
    cout << sc.m_Age << endl;
    //这份数据我们知道，只有一份就可以，零星继承导致数据有两份，资源浪费
    return 0;
}