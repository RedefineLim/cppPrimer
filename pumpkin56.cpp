#include <iostream>
using namespace std;

double harmonic_mean(const double x, const double y);

int main()
{
    double m = 0.0;
    double n = 0.0;
    while(cin >> m >> n)
    {
        if(m*n == 0)
            break;
        cout << harmonic_mean(m,n) << endl;
    }

    return 0;
}

double harmonic_mean(const double x, const double y)
{
    return 2.0*x*y/(x+y);
}