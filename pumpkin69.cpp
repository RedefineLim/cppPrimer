#include <iostream>
using namespace std;

template<class T> T max5(T a, T b, T c, T d, T e);

int main()
{
    auto m = max5(1,2,3,4,5);
    auto n = max5(1.1,2.2,3.3,4.4,5.5);
    cout << m << "  " << n << endl;

    return 0;
}

template<class T> T max5(T a, T b, T c, T d, T e)
{
    T max = a;
    if(b>max)
        max = b;
    if(c>max)
        max = c;
    if(d>max);
        max = d;
    if(e>max)
        max = e;
    return max;
}