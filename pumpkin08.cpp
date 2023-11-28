#include <string>
#include <iostream>
using namespace std;


int main()
{
    //1、C风格字符串
    char arr1[] = "hello world";
    cout << arr1 << endl;

    //2、C++风格字符串
    //包含一个头文件<string>
    string arr2 = "hello world";
    cout << arr2 << endl;

    return 0;
}