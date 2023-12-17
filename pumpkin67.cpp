#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void string_to_upper(string& ch);

int main()
{
    string ch;
    getline(cin, ch);
    string_to_upper(ch);
    cout << ch <<endl;

    return 0;
}

void string_to_upper(string& ch)
{
    int len = ch.size();
    for(int i = 0; i<len ;++i)
    {
        ch[i] = toupper(ch[i]);
    }
}