#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "请输入一个分数：>";
    cin >> score;
    cout << "您输入的分数为: "<< score << endl;
    if(score >= 600)
        cout << "恭喜您考上了一本大学!\n";
    else 
        cout << "继续努力！马上就能上一本了\n";

    return 0;
}