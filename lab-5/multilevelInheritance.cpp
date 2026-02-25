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
    BaseClass(int d):data(d){}
};

class DerivedClass1: public BaseClass{
    private:
    short smalldata;
    public:
    DerivedClass1(int a, short b):BaseClass(a), smalldata(b){}
    void show2(){
        show();
        cout << smalldata << endl;
        return;
    }
};

class DerivedClass2: public DerivedClass1{
    private:
    short smallerdata;
    public:
    DerivedClass2(int a, short b, short c):DerivedClass1(a, b), smallerdata(c){}
    void show3(){
        show2();
        cout << smallerdata << endl;
        return;
    }
};

int main(){
    DerivedClass2 obj(2, 38, 90);
    obj.show3();
    return 0;
}