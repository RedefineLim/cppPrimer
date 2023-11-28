#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << str << endl;

    getline(cin, str);      //读取一行字符串字面值
    cout<< str << endl;

    //向字符串内输入的时候
    //要使用
    // getline(cin,str);

    return 0;
}