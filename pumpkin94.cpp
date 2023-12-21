#include <iostream>
#include <string>
using namespace std;

//虚析构和纯虚析构   

//1、虚析构或纯虚析构就是用来解决父类指针释放子类对象的问题
//2、如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
//3、拥有纯虚析构的函数类也属于抽象类

class Animal
{
public:
    virtual void speak() = 0;   //纯虚函数
    //如果是纯虚析构所属类也属于抽象类
    virtual ~Animal() = 0;
    Animal() {
        cout << "Animal构造" << endl;
    }
};

Animal::~Animal()
{
    cout << "Animal纯虚析构" << endl;
}

class Cat: public Animal
{
public:
    virtual void speak() {
        cout << *m_Name << "小猫在说话" << endl;
    }
    string* m_Name;
    Cat(string name)
    {
        cout << "Cat 构造" << endl;
        m_Name = new string(name);
    }
    ~Cat() {
        if(m_Name != NULL) {
            cout << "Cat 析构" << endl;
            //父类指针在析构的时候 不会调用子类中析构函数
            delete m_Name;
            m_Name = NULL;
        }
    }
};

int main()
{
    Animal* ani = new Cat("Tom");
    ani->speak();
    delete ani;

    return 0;
}