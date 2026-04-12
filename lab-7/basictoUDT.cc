#include <iostream>
using namespace std;

class Test{
    public:
    int data;
    Test(){
        data = 0;
    }
    
    Test(int a){
        data = a;
    }

    void operator= (int a){
        data = a;
    }

    void show(){
        cout << "Data : " << data << endl;
    }
};
int main(){
    Test obj(5);
    obj.show();
    obj = 2;
    obj.show();
    Test obj2 = 24;
    obj2.show();
    return 0;
}