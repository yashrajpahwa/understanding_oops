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

class DerivedClass: public BaseClass{
    private:
    short smalldata;
    public:
    DerivedClass(int a, short b):BaseClass(a), smalldata(b){}
};
int main(){
    DerivedClass obj(2, 3);
    obj.show();
    return 0;
}