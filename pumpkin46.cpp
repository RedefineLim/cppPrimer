#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int sum = 0;
    cin >> num;
    while(num)
    {
        sum += num;
        cin >> num;
    }
    cout << sum;

    return 0;
}