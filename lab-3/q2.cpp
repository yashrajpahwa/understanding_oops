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
    friend void swapValues(firstClass *a, secondClass *b);
};

class secondClass{
    int j;
public:
    secondClass(int x) : j(x) {} 
    void show(){
        cout << j << endl;
    }   
    friend void swapValues(firstClass *a, secondClass *b);
};

void swapValues(firstClass *a, secondClass *b){
    int temp = a->i;
    a->i = b->j;
    b->j = temp;
}

int main(){
    firstClass a(5);
    secondClass b(10);
    swapValues(&a, &b);
    a.show();
    b.show();
    return 0;
}