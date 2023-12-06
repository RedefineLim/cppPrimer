#include <iostream>

unsigned factorial(unsigned n);

int main()
{
    unsigned n = 0;
    std::cin >> n;
    std::cout << factorial(n) << std::endl;

    return 0;
}

unsigned factorial(unsigned n)
{
    if(n<=1)
        return 1;
    else    
        return n*factorial(n-1);
}