#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 3> arr {};
    int i = 0;
    for(i=0;i<3;i++)
        cin >> arr[i];
    for(i=0;i<3;i++)
        cout << arr[i] << "  ";
    cout <<endl;

    return 0;
}