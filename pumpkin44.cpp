#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int j = 0;
    cin >> i >> j;
    int sum = 0;
    for(;i<=j;++i)
        sum += i;
    cout << sum;

    return 0;
}