#include <iostream>
using namespace std;

template <typename T>
void process(T a)
{
    cout << "Only 1 parameter of a type" << endl;
}
template <typename T>
void process(T a, T b)
{
    cout << "2 parameters of same type" << endl;
}
template <typename T, typename U>
void process(T a, U b)
{
    cout << "2 parameters of different type" << endl;
}
int main()
{
    process(2);
    process(2, 2);
    process(2.0, 2.0f);
    return 0;
}