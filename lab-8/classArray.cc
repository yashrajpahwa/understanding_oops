#include <iostream>
using namespace std;

template<typename T>
class arrays{
    int size;
    T *arr;
    public:
    arrays(int n){
        size = n;
        arr = new T[n];
        for(int i = 0; i < n; i++){
            arr[i] = 0;
        }
    }
    void input(int x){
        cout << "Enter data: ";
        for(int i = 0; i < size && i < x; i++){
            cin >> arr[i];
        }
    }

    void show(int x){
        cout << "Element as postion " << x << " is : " << arr[x] << endl;
    }
};
int main(){
    arrays<int> arr1(29);
    arr1.input(8);
    arr1.show(6);
    arr1.show(8);
    return 0;
}