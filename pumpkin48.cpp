#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
    array<string, 12> arr {"Jen","Feb","Mar","Apr","May","Jun","Jul","Aug","sup","Oct","Nov","Dec"};
    int i = 0;
    int sum = 0;
    for(i=0;i<12;++i)
    {
        int num = 0;
        cout << arr[i] << ":>";
        cin >> num;
        sum += num;
    }
    cout <<endl << "the total :" << sum;

    return 0;
}