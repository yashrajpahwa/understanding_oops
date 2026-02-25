#include <iostream>
using namespace std;
class secondClass;
class firstClass{
    int i;
public:
    firstClass(int x) : i(x) {}
    void show(){
        cout << i << endl;
    }
    friend int sumValues(firstClass a, secondClass b);
};

class secondClass{
    int j;
public:
    secondClass(int x) : j(x) {} 
    void show(){
        cout << j << endl;
    }   
    friend int sumValues(firstClass a, secondClass b);
};

inline int sumValues(firstClass a, secondClass b){
    return a.i + b.j;
}

int main(){
    firstClass a(5);
    secondClass b(10);
    cout << "The sum of data values of both objects is : " << sumValues(a, b) << endl;
    return 0;
}