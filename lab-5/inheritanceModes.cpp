#include <iostream>
using namespace std;

class base{
private:
    int priv;
protected:
    int prot;
public:
    int pub;
    base(int b, int c, int a = 0):priv(a), prot(b), pub(c){}
};

class derived1:public base{
public:
    derived1(int x, int y):base(x, y){}
    void publicShow(){
        cout << pub << ' ' << prot << endl; //priv cannot be accessed
    }
};

class derived2:protected base{
public:
    derived2(int x, int y):base(x, y){}
    void protectedShow(){
        cout << pub << ' ' << prot << endl; //priv cannot be accessed
    }
};

class derived3:private base{
public:
    derived3(int x, int y):base(x, y){}
    void privateShow(){
        cout << pub << ' ' << prot << endl; //priv cannot be accessed
    }
};

class derder:public derived3{
public:
    derder(int x, int y):derived3(x, y){}
    // void shouldntworkShow(){
    //     cout << pub << ' ' << prot << endl; 
    // }
    // this function does not work because the variables pub and prot are not inherited from the derived3 class
    // as they had become private members for it in due to private access specifier
};

int main(){
    derived1 obj1(22, 33);
    obj1.publicShow();
    cout << obj1.pub << endl; //obj.prot cannot be accessed
    derived2 obj2(39, 32);
    obj2.protectedShow();
    // cout << obj2.pub; also not allowed as that is also inherited as protected by derived2
    derived3 obj3(10, 84);
    obj3.privateShow();
    // again priv members cannot be accessed directly
    return 0;
}