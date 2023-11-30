#include <iostream>
#include <array>
using namespace std;

//array：模板类，储存在栈区，效率与数组相同，但是更加方便安全

int main()
{
    array<int ,5> arr = {1,2,3,4,5};
    //array<typeName, n_elem> arr;

    return 0;
}