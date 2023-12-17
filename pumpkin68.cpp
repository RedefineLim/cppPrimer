#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char* str;
    int ct;
};

void set(stringy& str, const char* ch);
void show(const char* const arr, int n = 1);
void show(const stringy arr, int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");

    
    return 0;
}

void set(stringy& str, const char* ch)
{
    str.ct = strlen(ch);
    str.str = new char[str.ct];
    strcpy(str.str, ch);
}

void show(const char* const arr, int n)
{
    while(n--)
        cout << arr << endl;
}

void show(const stringy arr, int n)
{
    while(n--)
        cout << arr.str << endl;
}