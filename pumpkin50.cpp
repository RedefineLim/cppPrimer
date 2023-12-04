#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[100] {};
    int count = 0;
    cout << "Enter words (to stop, type the word done)" << endl;
    while(1)
    {
        cin >> arr;
        if(! strcmp(arr, "done"))
            break;
        ++ count;
    }
    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}