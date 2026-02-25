#include <iostream>
using namespace std;

inline int cube(int x){
    return x*x*x;
}

int main(){
    int c = 81;
    cout << "Cube: " << cube(c) << endl;
    return 0;
}