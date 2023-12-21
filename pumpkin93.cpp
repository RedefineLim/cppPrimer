#include <iostream>
using namespace std;

//多态：制作饮品

class Abstract
{
public:
    //煮水
    virtual void boil() = 0;
    //冲泡
    virtual void Brew() = 0;
    //倒入
    virtual void PourCup() = 0;
    //辅料
    virtual void PutSomething() = 0;
    //制作饮品
    void makeDrink() {
        boil();
        Brew();
        PourCup();
        PutSomething();
    }
};

class Coffee: public Abstract
{
public:
    virtual void boil() {
        cout << "煮农夫山泉" << endl;
    }
    virtual void Brew() {
        cout << "冲泡咖啡" << endl;
    }
    virtual void PourCup() {
        cout << "倒入杯中" << endl;
    }
    virtual void PutSomething() {
        cout << "加入糖和牛奶" << endl;
    }
};

//制作茶叶   
class Tea: public Abstract
{
public:
    virtual void boil() {
        cout << "煮农夫山泉" << endl;
    }
    virtual void Brew() {
        cout << "冲泡茶叶" << endl;
    }
    virtual void PourCup() {
        cout << "倒入杯中" << endl;
    }
    virtual void PutSomething() {
        cout << "加入枸杞" << endl;
    }
};

void doWork(Abstract* p)
{
    p->makeDrink();
    delete p;
}

int main()
{
    doWork(new Coffee);
    doWork(new Tea);

    return 0;
}