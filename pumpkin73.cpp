#include <iostream>
#include <string>
using namespace std;

//成员函数做友元
//先声明Building类

class Building;

class GoodGay
{
private:

public:
    GoodGay();
    Building* building;
    void visit();   //可以访问Buding中的私有成员
    void visit2();  //不可以访问Buding中的私有成员
};

class Building
{
    friend void GoodGay::visit();
private:
    string m_BedRoom;
public:
    string m_SittingRoom;
    Building();
    ~Building();
};

Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::visit()
{
    cout << "visit函数正在访问： " << building->m_SittingRoom << endl;

    cout << "visit函数正在访问： " << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
    cout << "visit函数正在访问： " << building->m_SittingRoom << endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
}

int main()
{
    test01();
    return 0;
}