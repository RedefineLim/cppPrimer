#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fir_name {};
    string sec_name {};
    cout << "Enter your first name:>";
    cin >> fir_name;

    cout << "Enter your last name:>";
    cin >> sec_name;

    cout << "Here's the information in a single string: " << fir_name+ ","+ sec_name << endl;

    return 0;
}