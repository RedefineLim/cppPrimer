#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int i = 0;
    int j = 0;
    cout << "Enter number of rows:>";
    cin >> num;
    for(i=0;i<num;++i)
    {
        for(j=0;j<num;++j)
        {
            if(j<num-i-1)
                cout << ". ";
            else    
                cout << "* ";
        }
        cout << endl;
    }

    return 0;
}