#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float valume;
};

void show_struct1(box* ps);
void show_struct2(box& ps);

int main()
{
    box n = {"caonima", 1.25, 3.25, 12.56, 2.25};
    show_struct1(&n);
    show_struct2(n);

    return 0;
}

void show_struct1(box* ps)
{
    cout << ps->maker << ' ' << ps->height << ' ' << ps->width << ' ' << ps->length << ' ' << ps->valume << endl;
}

void show_struct2(box& ps)
{
    cout << ps.maker << ' ' << ps.height << ' ' << ps.width << ' ' << ps.length << ' ' << ps.valume << endl;
}