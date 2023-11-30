#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct fish_DIscribe
{
    // string spe;
    char spe[20];
    int weight;
    double length;
};

int main()
{
    fish_DIscribe* ptr = new fish_DIscribe;
    // ptr->spe = "bailian";
    strcpy(ptr->spe, "bailian");
    ptr->weight = 5;
    ptr->length = 12.5;
    cout << ptr->spe <<endl << ptr->weight << endl << ptr->length << endl;

    return 0;
}