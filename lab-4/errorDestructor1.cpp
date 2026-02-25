#include <iostream>
using namespace std;

class test{
private:
    int a;
    int b;
public:
    // ~test1(){
    //     cout << "This is wrong!" << endl;
    // }
    ~test(){
        cout << "This is correct!" << endl;
    }
};

int main(){
    test c;
    return 0;
}