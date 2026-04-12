#include <iostream>
#include <string>
using namespace std;

string operator<<(string &a, int x)
{
    if (a.empty())
    {
        cout << "String empty!" << endl;
        return a;
    }
    while (x != 0)
    {
        a.pop_back();
        x--;
    }
    return a;
}
string operator>>(string &a, int x)
{
    if (a.empty())
    {
        cout << "String empty!" << endl;
        return a;
    }
    for (int i = 0; i < x; i++)
    {
        a.push_back(a[i]);
    }
    return a;
}
int main()
{
    string a = "yashraj...";
    a << 3;
    cout << a << endl;
    a >> 7;
    cout << a << endl;
    string b;
    b >> 3;
    b << 3;
    cout << b << endl;
    return 0;
}