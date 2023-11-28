#include <iostream>
// #include <string>
using namespace std;

int main()
{
    //getline()  读取一行数据

    char arr1[20] {};
    char arr2[20] {};

    cin.getline(arr1, 20).getline(arr2, 20);

    cout << "name1:> " << arr1 << endl << "name2:> " << arr2 << endl;

    return 0;
}