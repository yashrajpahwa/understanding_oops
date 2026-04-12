#include <iostream>
using namespace std;

class Test{
    public:
    int a;
    Test(){
        count++;
    }
    static int count;
};

class B:public Test{};
class C:public Test{};
class D:public C, public B{};
int Test::count = 0;

int main(){
    D obj;
    //obj.a = 1;
    //cout << obj.a;
    return 0;
}