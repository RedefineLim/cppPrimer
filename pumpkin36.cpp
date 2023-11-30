#include <string>
#include <iostream>
using namespace std;

struct serve_Ana
{
    string name;
    double d;
    double weight;
};

int main()
{
    serve_Ana* ptr = new serve_Ana;
    getline(cin, ptr->name); 
    cin >> ptr->d >> ptr->weight;

    cout << ptr->name << endl << ptr->d << endl << ptr->weight << endl;

    return 0;
}