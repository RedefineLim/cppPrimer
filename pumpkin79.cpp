#include <iostream>
#include <string>
using namespace std;

// 函数调用运算符的重载 
//重载后的使用方式非常像函数，因此称为仿函数 

class My_Print
{
public:
    //重载函数调用运算符 
    void operator()(string test);
};

void My_Print::operator()(string test)
{
    cout << test << endl;
}

void test01()
{
    My_Print myPrint;
    myPrint("hello world!");
}

int main()
{
    test01();

    return 0;
}