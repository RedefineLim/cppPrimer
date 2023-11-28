#include <iostream>
using namespace std;

//冒泡排序

int main()
{
    int arr[10] = {7,6,4,3,2,1,5,8,6,10};
    int i = 0;
    int j = 0;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}