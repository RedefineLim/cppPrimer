#include <iostream>
using namespace std;

//多态写代码组织结构十分清晰
//可读性强
//开闭原则：对扩展进行开放，对修改进行关闭

class AbstractCal
{
public:
    virtual int getResult() = 0;

    int m_Num1;
    int m_Num2;
};

//加法
class Add: public AbstractCal
{
public:
    int getResult() {
        return m_Num1 + m_Num2;
    }
};

class Sub: public AbstractCal
{
public:
    int getResult() {
        return m_Num1 - m_Num2;
    }
};

class Mul: public AbstractCal
{
public:
    int getResult() {
        return m_Num1 * m_Num2;
    }
};

int main()
{
    //父类指针或引用指向子对象
    AbstractCal* p = new Add;
    p->m_Num1 = 10;
    p->m_Num2 = 20;

    cout << p->getResult() << endl;

    p = new Sub;
    p->m_Num1 = 40;
    p->m_Num2 = 10;

    cout << p->getResult() << endl;
    //用完后记得销毁
    delete p;
    p = NULL;
    return 0;
}