#include <iostream>
using namespace std;

template <typename T>
void swapvariables(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
    return;
}

int main(){
    int a = 4, b = 9;
    swapvariables(a, b);
    cout << a << ' ' << b << endl;
    float x = 3.11, y = 21.41;
    swapvariables(x, y);
    cout << x << ' ' << y << endl;
    return 0;
}