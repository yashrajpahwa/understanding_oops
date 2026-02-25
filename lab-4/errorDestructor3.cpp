/*Error encountered if parameter given:
errorDestructor3.cpp:17:16: error: destructors may not have parameters
     ~test(int a){
 */

#include <iostream>
using namespace std;

class test{
private:
    int a;
    int b;
public:
    // ~test(int a){
    //     cout << "Destroyed!" << endl;
    // }
    ~test(){
        cout << "Destroyed!" << endl;
    }
};

int main(){
    test c;
    return 0;
}