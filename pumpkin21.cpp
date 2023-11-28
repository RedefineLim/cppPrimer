#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    // struct Student s = {"zhangsan", 18, 650};
    
    Student s = {"zhangsan", 18, 650};  //结构体定义时struct
    cout << s.score <<" " << s.age << " "<< s.score <<endl;

    return 0;
}