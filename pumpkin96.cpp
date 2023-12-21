#include <iostream>
using namespace std;
//实现通用的对数组进行排序的函数 
//利用函数模板封装一个排序的函数，可以对不同类型数组进行排序

template<typename T>
void mySawp(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void mySort(T arr[], int len)
{
    int i = 0;
    for(i=0;i<len;++i)
    {
        int max = i;
        int j = 0;
        for(j=i+1;j<len;++j)
        {
            if(arr[max] < arr[j])
            {
                max = j;
            }
        }
        if(max != i) 
        {
            //交换max 和 i元素
            mySawp(arr[max], arr[i]);
        }
    }
}

template<typename T>
void print(T arr[], int len)
{
    for(int i = 0;i<len;++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    //char排序
    char arr[] = "abcdef";
    int sz = sizeof(arr)/sizeof(arr[0]);
    mySort(arr, sz);
    print(arr ,sz);
    //int
    int arr_int[] = {1,2,3,4,5,6,7,8,9,10};
    int num = sizeof(arr_int)/sizeof(arr_int[0]);
    mySort(arr_int, sz);
    print(arr_int ,sz);

    return 0;
}