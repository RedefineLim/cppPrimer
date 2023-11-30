#include <iostream>
#include <string>
using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable* str = new inflatable;
    cin.getline(str->name,20);
    cin >> str->volume;
    cin >> str->price;

    cout << str->name << endl << str->volume << endl << str->price << endl;

    delete str;
    str = NULL;
    return 0;
}