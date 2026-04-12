#include <iostream>
using namespace std;

template<typename T, typename U>
class Arithmetic{
    public:
    T a;
    U b;
    Arithmetic(T x, U y):a(x), b(y){}
    T add(){
        return a + b;
    }
    T subtract(){
        return a - b;
    }
    T multiply(){
        return a * b;
    }
    T divide(){
        if (b == 0){
            cout << "ERROR!" << endl;
            exit(-1);
        }
        return a / b;
    }
};

int main(){
    Arithmetic<float, int> pair(2.1,2);
    cout << "Addition : " << pair.add() << endl;
    cout << "Subtraction : " << pair.subtract() << endl;
    cout << "Multiplication : " << pair.multiply() << endl;
    cout << "Division : " << pair.divide() << endl;
    return 0;
}