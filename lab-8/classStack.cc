#include <iostream>
using namespace std;

template <class T>
class stack{
    public:
    T arr[100];
    static int pos;
    void push(T a){
        if (pos >= 100){
            return;
        }
        arr[pos] = a;
        pos++;
        return;
    }
    T pop(){
        return arr[pos--];
    }
    void show(){
        for(int i = 0; i < pos; i++){
            cout << arr[i] << ' ';
        }cout << endl;
    }
};
template <typename T>
int stack<T>::pos = 0;

int main(){
    stack<int> s1;
    s1.push(11);
    s1.push(41);
    s1.pop();
    s1.push(21);
    s1.pop();
    s1.push(21);
    s1.push(2541);
    s1.show();
    return 0;
}