#include <iostream>
using namespace std;

class myClass{
private:
    int data;
public:
    myClass(int x):data(x){}
    static myClass byValue(myClass obj);
    static myClass byReference(myClass *obj);
    void show();
};

void myClass::show(){
    cout << "Data: " << data << endl;
}
myClass myClass::byValue(myClass obj){
    myClass a(0);
    a.data = obj.data;
    obj.data = 100;
    return a;
}

myClass myClass::byReference(myClass *obj){
    myClass a(0);
    a.data = obj->data;
    obj->data = 100;
    return a;
}

int main(){
    myClass A(5), B(11);
    cout << "An object is created and returned with the same data as the passed object however the function fails to modify the original data." << endl;
    cout << "\nValue of the returned object : ";
    myClass::byValue(A).show();
    cout << "\nValue of the passed object : ";
    A.show();
    cout << "An object is created and returned with the same data as the passed object however the function also modifies the original data." << endl;
    cout << "\nValue of the returned object : ";
    myClass::byReference(&B).show();
    cout << "\nValue of the passed object : ";
    B.show();
    return 0;
}