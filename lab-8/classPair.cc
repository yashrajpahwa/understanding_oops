#include <iostream>
using namespace std;
template<typename T>
class Pair{
    public:
    T a;
    T b;
    Pair(T a, T b):a(a), b(b){}
    void showpair(){
        cout << "The pair of data is : " << a << ' ' << b << endl;
    }
};

int main(){
    Pair<int> pair1(3, 4.4);
    pair1.showpair();
    Pair<double> pair2(4, 51.1);
    pair2.showpair();
    return 0;
}