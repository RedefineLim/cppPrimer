#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    char ch = 0;
    while(cin.get(ch))
    {
        cout.put(ch);
        ++count;
    }

    return 0;
}