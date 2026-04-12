#include <iostream>
using namespace std;

class Test{
    public:
    int data = 0;
    Test (int i):data(i){}
    operator int (){
        return data;
    }
    void show(){
        cout << "data : " << data << endl;
    }
};

int main(){
    Test obj(10);
    int x = obj;
    obj.show();
    cout << x << endl;
    return 0;
}