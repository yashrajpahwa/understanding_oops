#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T *arr, int size){
    for(int i = 0; i < size; i++){
        for(int j = i; j + 1< size; j++){
            if(arr[j] > arr[j + 1]){
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int arr1[] = {21, -11, 42, 53, 661, 11, 1};
    float arr2[] = {-1, -214, -21.432, -54.231, -93.2, 0, -9};
    bubbleSort(arr1, 7);
    bubbleSort(arr2, 7);
    for(int i = 0; i < 7; i++){
        cout << arr1[i] << ' ';
    }cout << endl;
    for(int i = 0; i < 7; i++){
        cout << arr2[i] << ' ';
    }cout << endl;
    return 0;
}