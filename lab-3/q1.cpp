#include <iostream>
using namespace std;

class myClass{
public:
    int data;
};


int main(){
    myClass A, *B = new myClass;
    A.data = 5;
    B->data = 7;

    cout << "Data in the first object: " << (&A)->data << endl;
    cout << "Data in the first object: " << (*B).data << endl;
    
    delete B;
    return 0;
}