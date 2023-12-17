#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar
{
    char name[40];
    double weight;
    int heat;
};

void reset(CandyBar& haha, char* str , double wei , int heat);
void show(const CandyBar& haha);

int main()
{
    CandyBar haha;
    char str[] = "Millennium Munch";
    double wei = 2.85;
    int heat = 350;
    reset(haha, str, wei ,heat);
    show(haha);

    return 0;
}

void reset(CandyBar& haha, char* str , double wei , int heat)
{
    strcpy(haha.name, str);
    haha.weight = wei;
    haha.heat = heat;
}

void show(const CandyBar& haha)
{
    cout << haha.name << endl << haha.weight << endl << haha.heat << endl;
}

//注意：函数原型中必须和函数定义中的参数列表保持一致