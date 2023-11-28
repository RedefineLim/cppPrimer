#include <iostream>
using namespace std;

void reverse_Arr(int* arr ,unsigned int sz)
{
    int* left = arr;
    int* right = arr+sz-1;
    while(left<right)
    {
        int tmp = *(right);
        *right = *left;
        *left = tmp;
        left++;
        right--;
    }
}

int main()
{
    int arr[5] = {4,3,2,1,5};
    reverse_Arr(arr, sizeof(arr)/sizeof(arr[0]));
    int i = 0;
    for(i=0;i<5;i++)
        cout << arr[i] << " " ;

    return 0;
}