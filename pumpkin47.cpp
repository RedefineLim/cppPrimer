#include <iostream>
using namespace std;

int main()
{
    int year = 1;
    double money = 105;
    double interest = 0;
    double sum = 0;
    while(sum < 105)
    {
        interest = money * 0.05;
        money += interest;
        sum += interest;
        ++year;
    }
    cout << year << endl << money+sum << endl;

    return 0;
}