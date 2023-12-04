#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<long double, 100> arr {};
    arr[0] = arr[1] = 1;
    int i = 0;
    for(i=2;i<101;++i)
    {
        arr[i] = i*arr[i-1];
    }
    // for(i=0;i<101;++i)
    // {
    //     cout << i << " != " << arr[i] <<"\t" ;
    // }
    cout << arr[100] << endl;
    return 0;
}