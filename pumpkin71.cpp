//友元
//全局函数做友元

#include <string>
#include <iostream>
using namespace std;

class Building
{
    friend void goodGay(Building* building);
private:
    string m_BedRoom;   //客厅
public:
    string m_SittingRoom;   //客厅 
    Building();
};

Building::Building()
{
    m_BedRoom = "卧室";
    m_SittingRoom = "客厅";
}

//全局函数
void goodGay(Building* building)
{
    cout << "好基友全局函数 正在访问 ： " << building->m_SittingRoom << endl;
    cout << "好基友全局函数 正在访问 ： " << building->m_BedRoom << endl;
}

void test01()
{
    Building building;
    goodGay(&building);
}

int main()
{

    return 0;
}