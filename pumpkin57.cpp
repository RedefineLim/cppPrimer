#include <iostream>
using namespace std;

void input_arr(int* arr, int sz);
void display(int* arr, int sz);
double average_arr(int* arr ,int sz);

int main()
{
    int arr[10] {};
    int n = 0;
    cout << "请输入你想要输入数据的个数 :>";
    cin >> n;
    input_arr(arr, n);
    display(arr,n);
    cout << average_arr(arr, n) << endl;

    return 0;
}

void input_arr(int* arr, int sz)
{
    for(int i = 0;i<sz;++i)
        cin >> arr[i];
}

void display(int* arr, int sz)
{
    for(int i = 0; i<sz; ++i)
        cout << arr[i] << ' ';
    cout << endl;
}

double average_arr(int* arr ,int sz)
{
    int sum = 0;
    for(int i = 0; i<sz; ++i)
    {
        sum += arr[i];
    }
    return double(sum)/double(sz);
}