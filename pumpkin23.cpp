#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Guo ";
    string str2 = "Qi ";
    string str3 = "Fan";

    str1 += str2 + str3;
    cout << str1 + "." << endl;

    return 0;
}