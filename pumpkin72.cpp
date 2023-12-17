#include <iostream>
#include <string>
using namespace std;

//类做友元

class Building
{
    friend class GoodGay;
private:
    string m_BedRoom;
public:
    string m_SittingRoom;
    Building();
};

class GoodGay
{
public:
    Building* building;
    void visit() const;
    GoodGay();
};

Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    //创建一个Building对象
    building = new Building;
}

void GoodGay::visit() const
{
    cout << "好基友类正在访问： " << building->m_SittingRoom << endl;
    cout << "好基友类正在访问： " << building->m_BedRoom << endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    test01();

    return 0;
}