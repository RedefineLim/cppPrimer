#include <iostream>
using namespace std;

int main()
{
    int ch = cin.get();
    int count = 0;
    while(ch != EOF)
    {
        cout.put(ch);
        ++count;
        ch = cin.get();
    }

    return 0;
}