#include <iostream>
#include <string>
using namespace std;

template<class T>
T maxn(T arr[], int sz);

template<> string maxn(string ch[], int sz);

int main()
{
    int arr1[6] = {1,2,3,4,5,6};
    double arr2[4] = {1.1,2.2,3.3,4.4};
    string ch[5] = {"cao", "ni", "ma", "shabi" , "Github"};

    int a = maxn(arr1, sizeof(arr1)/sizeof(arr1[0]));
    double b = maxn(arr2, sizeof(arr2)/sizeof(arr2[0]));
    string c = maxn(ch,sizeof(ch)/sizeof(ch[0]));

    cout << a << endl << b << endl << c << endl;

    return 0;
}

template<class T>
T maxn(T arr[], int sz)
{
    int i = 0;
    T max = arr[0];
    for(i=1;i<sz;++i)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

template<> string maxn(string ch[], int sz)
{
    int i = 0;
    int max = ch[0].size();
    int flag = 0;
    for(i=1;i<sz;++i)
    {
        max = ch[i].size()>max?ch[i].size():max;
        if(max = ch[i].size())
            flag = i;
    }
    return ch[flag];
}