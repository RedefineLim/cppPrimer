#include <iostream>
using namespace std;

//继承方式
//公共继承
class Base1
{
public:
    int m_A;
protected:
    int m_B;        // 类内可以访问，类外不可以访问
private:
    int m_C;
};

class Son1: public Base1
{
public:
    void func() {
        m_A = 10;   //父类中的公共权限成员 到子类中仍然是公共权限成员
        m_B = 10;   //父类中的保护权限成员到子类中仍然是保护权限
    } 
};

class Base2
{
public:
    int m_A;
protected:
    int m_B;        // 类内可以访问，类外不可以访问
private:
    int m_C;
};

class Son2: protected Base2
{
public:
    void func() {
        m_A = 100;
        m_B = 100;
    }
};

class Base3
{
public:
    int m_A;
protected:
    int m_B;        // 类内可以访问，类外不可以访问
private:
    int m_C;
};

class Son3: private Base3
{
public:
    void func() {
        m_A = 100;
        m_B = 100;
    }
};

void test01()
{
    Son1 s1;
    s1.m_A = 100;
    // s1.m_B = 100;
}

void test02()
{
    Son2 s2;
    // s2.m_A = 1000;
    // s2.m_B = 1000;
}

void test03()
{
    Son3 s3;
    // s3.m_A = 100;
    // s3.m_B = 100;
}

int main()
{

    return 0;
}