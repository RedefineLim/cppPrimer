#include <iostream>
using namespace std;

//写一段程序，奇数不输出，偶数输出

int main()
{
    //break 选择语句或者循环语句中
    // continue 在循环语句中，跳过 富哥要求的语句，来执行下一条语句 
    //执行完本次就不再执行下面的语句了  
    int i = 0;
    for(i=1;i<=100;i++)
    {
        if(i%2)
            continue;
        cout << i << endl;
    }
    return 0;
}