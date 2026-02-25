#include <iostream>
using namespace std;

class BaseClass{
    private:
    int data;
    public: 
    void show(){
        cout << data << endl;
        return;
    }
    BaseClass(int d):data(d){
        cout << "Base class object created!" << endl;
    }
    ~BaseClass(){
        cout << "Base class object destroyed!" << endl;
    }
};

class DerivedClass: public BaseClass{
    private:
    short smalldata;
    public:
    DerivedClass(int a, short b):BaseClass(a), smalldata(b){
        cout << "Derived class object created!" << endl;
    }
    ~DerivedClass(){
        cout << "Derived class object destroyed!" << endl;
    }
};
int main(){
    DerivedClass obj(2, 3);
    obj.show();
    return 0;
}