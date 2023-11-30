#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int carl;
};

int main()
{
    CandyBar snake[3] {};
    int i = 0;
    for(i=0;i<3;i++)
    {
        snake[i].brand = "Mocha Munch";
        snake[i].weight = 2.3;
        snake[i].carl = 350;
    }
    for(i=0;i<3;i++)
        cout << snake[i].brand << " " << snake[i].weight << " " << snake[i].carl <<endl;

    return 0;
}