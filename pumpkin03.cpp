#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    cout << "Please enter a value : "<< n <<endl;
    cout << n << " degrees Celsius is " << (1.8*n + 32) <<" degrees Fahrenheit." << endl;

    return 0;
}