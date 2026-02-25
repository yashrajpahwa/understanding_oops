#include <iostream>
#include <string>
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
    void show1(){
        show();
        cout << smalldata << endl;
    }
    DerivedClass1(int a, short b):BaseClass(a), smalldata(b){}
};
class DerivedClass2: public BaseClass{
    private:
    float smalldata;
    public:
    DerivedClass2(int a, float b):BaseClass(a), smalldata(b){}
    void show1(){
        show();
        cout << smalldata << endl;
    }
};
class DerivedClass3: public BaseClass{
    private:
    string smalldata;
    public:
    DerivedClass3(int a, string b):BaseClass(a), smalldata(b){}
    void show1(){
        show();
        cout << smalldata << endl;
    }
};
int main(){
    DerivedClass1 obj1(21, 53);
    DerivedClass2 obj2(22, 67.67);
    DerivedClass3 obj3(24, "WORD");
    obj1.show1();
    obj2.show1();
    obj3.show1();
    return 0;
}