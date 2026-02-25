#include <iostream>
using namespace std;

class myClass{
private:
    int data;
public:
    myClass(int x) : data(x){}
    void show(){
        cout << "Data of this myClass object is : " << data << endl;
    }
    friend class friendClass;
};

class friendClass{
public:
    static void showFriendData(myClass a){
        cout << "Data of the object belonging to myClass as accessed by friend class : " << a.data << endl;
    }
};

int main(){
    myClass obj(15);
    obj.show();
    friendClass::showFriendData(obj);
    return 0;
}