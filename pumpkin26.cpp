#include <string>
#include <iostream>
using namespace std;

int main()
{
    //R"(原始字符串)" 这样表示更加方便  
    cout << R"(Jim "king" Tutt uses "\n" instead of endl.)" << endl;

    cout << "Jin \"king\" Tutt uses \"\\n\" instead of endl." << endl;

    cout << R"+*("(Who wouldn't?)" , she whispered.)+*" << endl;

    return 0;
}

//R"+*(()  )+*" 