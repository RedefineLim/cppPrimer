#include <iostream>
using namespace std;

int main()
{
    int m = 0;
    cin >> m;
    int i = 0;
    for(i=0;i<m;i++)
    {
        int j = 0;
        for(j=0;j<m;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}