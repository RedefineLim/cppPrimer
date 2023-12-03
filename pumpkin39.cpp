#include <iostream>
using namespace std;

int main()
{
    long long arr[16] {};
    int i = 0;
    int j = 0;
    arr[0] = 1;
    for(i=1;i<16;i++)
    {
        arr[i] = 1;
        for(j=1;j<=i;j++)
        {
            arr[i] *= j;
        }
    }
    for(i=0;i<16;i++)
    {
        cout << i << " != " << arr[i] << "  " ;  
    }
    cout << endl;

    return 0;
}