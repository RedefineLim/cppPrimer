#include <iostream>
#include <string>
using namespace std;

struct car
{
    string maker;
    int year;
};

int main()
{
    int num = 0;
    cout << "How many cars do you wish to catalog?";
    cin >> num;
    car* arr = new car[num];

    int i = 0;
    for(i=0;i<num;++i)
    {
        cout << "Car #" << i+1 << ":" <<endl <<"Please enter the make :>";
        cin.get();
        getline(cin,arr[i].maker);
        cout << "Please enter the year made :>" ;
        cin >> arr[i].year;
    }
    for(i=0;i<num;++i)
        cout << arr[i].year << " " << arr[i].maker <<endl;

    delete [] arr;  //删除 防止内存泄漏
    arr = NULL;
    return 0;
}