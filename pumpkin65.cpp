#include <iostream>
using namespace std;

void function(char* ,int);

int main()
{
    char arr[] = "hello world";
    int num = 0;
    cin >> num;
    function(arr, num);

    return 0;
}

void function(char* arr,int num)
{
    if(num>0)
        cout << arr;
    else return;
    cout << endl;
    function(arr, --num);
}