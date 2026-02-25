#include <iostream>
using namespace std;

namespace firstNamespace{
    int a = 1;
    int b = 2;
    void show(){
        cout << "Hello World!" << endl;
    }
}

namespace secondNamespace{
    float a = 1.1;
    float b = 9.9;
    void show(){
        cout << "Bye World..." << endl;
    }
}

int main(){
    firstNamespace::show();
    cout << firstNamespace::a << ' ' << firstNamespace::b << endl;
    cout << secondNamespace::a << ' ' << secondNamespace::b << endl;
    secondNamespace::show();
}