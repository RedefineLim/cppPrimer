#include <iostream>
#include <cstring>
using namespace std;

char* getname();

int main()
{
    char* name = getname();
    cout << name << " at " << (int*)name << endl;
    
    delete [] name;

    name = getname();
    cout << name << " at " << (int*)name << endl;
    
    delete [] name;
    name = NULL;
    return 0;
}

char* getname()
{
    char temp[80] {};
    cin >> temp;
    char* pn = new char [strlen(temp)+1];
    strcpy(pn, temp);

    return pn;
}