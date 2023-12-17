#include <iostream>
using namespace std;  

class MyAdd
{
public:
    int operator()(int num1, int num2);
};

int MyAdd::operator()(int num1, int num2)
{
    return num1 + num2;
}

void test01()
{
    // 匿名创建对象,用一次就不用了  
    cout << MyAdd()(1000, 100) << endl;
}

int main()
{   
    test01();

    return 0;
}