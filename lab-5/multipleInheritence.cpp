#include <iostream>
using namespace std;

class BaseClass1{
    private:
    int data;
    public: 
    void show1(){
        cout << data << endl;
        return;
    }
    BaseClass1(int d):data(d){}
};

class BaseClass2{
    private:
    int stuff;
    public: 
    void show2(){
        cout << stuff << endl;
        return;
    }
    BaseClass2(int d):stuff(d){}
};

class DerivedClass: public BaseClass1, public BaseClass2{
    private:
    public:
    DerivedClass(int a, short b):BaseClass1(a), BaseClass2(b){}
};

int main(){
    DerivedClass obj(2, 3);
    obj.show1();
    obj.show2();
    return 0;
}