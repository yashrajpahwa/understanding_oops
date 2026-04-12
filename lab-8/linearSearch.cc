#include <iostream>
using namespace std;

template<typename T>
int linearSearch(T *arr, T val, int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr1[] = {21, -11, 42, 53, 661, 11, 1};
    float arr2[] = {-1, -214, -21.432, -54.231, -93.2, 0, -9};
    cout << linearSearch(arr1, 42, 7) << endl;
    cout << linearSearch(arr1, 421, 7) << endl;
    cout << linearSearch(arr2, -93.2f, 7) << endl;
    cout << linearSearch(arr2, 21.0f, 7) << endl;
    return 0;
}