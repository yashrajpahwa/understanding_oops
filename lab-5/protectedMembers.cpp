#include <iostream>
#include <string>
using namespace std;

class abhibhavak{
private:
    int priv;
protected:
    int prot;
    string x = "This is very important protected stuff!";
public:
    short s;
};

class bachcha:public abhibhavak{
public:
    bachcha(int a, int b){ //better practice is to create a constructor for parent and call it to initialize the inherited variables
                           //the direct initialization prot(a), s(b) is not allowed because these are not direct members of the bachcha
        s = a; 
        prot = b;
    }
    void show();
    void showProtectedMember();
};

void bachcha::show(){
    cout << s << ' ' << prot << endl;
}
void bachcha::showProtectedMember(){
    cout << x << endl;
}
int main(){
    bachcha obj(2, 4);
    obj.show();
    cout << "This was public - " << obj.s << endl; //cant access prot like this
    obj.showProtectedMember();
    return 0;
}