/*Error encountered if 2 destructors:
errorDestructor2.cpp:12:5: error: 'test::~test()' cannot be overloaded
     ~test(){
     ^
errorDestructor2.cpp:9:5: error: with 'test::~test()'
     ~test(){
     ^*/

#include <iostream>
using namespace std;

class test{
private:
    int a;
    int b;
public:
    ~test(){
        cout << "1st destructor!" << endl;
    }
    // ~test(){
    //     cout << "2nd destructor!" << endl;
    // }
    
};

int main(){
    test c;
    return 0;
}