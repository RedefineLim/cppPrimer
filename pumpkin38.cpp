#include <iostream>
using namespace std;

const int size = 16;

int main()
{
    long long arr[size] {};
    arr[0] = arr[1] = 1;
    int i = 0;
    for(i=2;i<size;i++)
    {
        arr[i] = i*arr[i-1];
    }

    for(i=0;i<size;i++)
    {
        cout << i << " != " << arr[i] <<"\t";
    }
    cout << endl;

    return 0;
}