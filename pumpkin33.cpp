#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char arrfir[10] {};
    char arrsec[10] {};
    cout << "Enter your first name:>";
    cin >> arrfir;
    cout << "Enter your last name:>";
    cin >> arrsec;
    
    cout << "Here's the information in a single string: " << arrfir << "," << arrsec << endl;

    return 0;
}