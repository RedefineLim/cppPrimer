#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ch;
    int count = 0;
    cout << "Enter words (to stop, type the word done)" << endl;
    while(1)
    {
        cin >> ch;
        if(ch == "done")
            break;
        ++count;
    }
    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}