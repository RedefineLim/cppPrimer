#include <iostream>
using namespace std;

//电脑组装

//抽象CPU
class CPU 
{
public: 
    virtual void calculate() = 0;
};

class VideoCard
{
public:
    virtual void display() = 0;
};

class Memory
{
public:
    virtual void storage() = 0;
};

class Computer
{
private:
    CPU* m_cpu;
    VideoCard* m_vc;
    Memory* m_mem;
public:
    Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }

    void work() {
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }
    ~Computer() {
        if(m_cpu != NULL) {
            delete m_cpu;
            m_cpu = NULL;
        }
        if(m_mem != NULL) {
            delete m_mem;
            m_mem = NULL;
        }
        if(m_vc != NULL) {
            delete m_vc;
            m_vc = NULL;
        }
    }
};

class InterCPU: public CPU
{
public:
    virtual void calculate() {
        cout << "Inter CPU begin" << endl;
    }
};

class InterVC: public VideoCard
{
public:
    virtual void display() {
        cout << "Inter VC begin" << endl;
    }
};

class InterMem: public Memory
{
public:
    virtual void storage() {
        cout << "Inter Mem begin" << endl;
    }
};

class LCPU: public CPU
{
public:
    virtual void calculate() {
        cout << "L CPU begin" << endl;
    }
};

class LVC: public VideoCard
{
public:
    virtual void display() {
        cout << "L VC begin" << endl;
    }
};

class LMem: public Memory
{
public:
    virtual void storage() {
        cout << "L Mem begin" << endl;
    }
};

int main()
{
    //第一台电脑零件
    CPU* interC = new InterCPU;
    VideoCard* interV = new InterVC;
    Memory* interM = new InterMem;
    //第一台电脑组装
    Computer* Comp1 = new Computer(interC, interV, interM);
    Comp1->work();
    delete Comp1;

    cout << "------------------------------" << endl;
    //第二台电脑零件
    Computer* Comp2 = new Computer(new LCPU, new LVC, new LMem);
    Comp2->work();
    delete Comp2;

    return 0;
}