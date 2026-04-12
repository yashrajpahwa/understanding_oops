#include <iostream>
using namespace std;

template <typename T, int size>
T minimum(T *arr){
    if (size < 1){
        cerr << "No array!" << endl;
        exit(-1);
    }

    T min = arr[0];
    for(int i = 0; i < size; i++){
        if (arr[i] < min)
        min = arr[i];
    }
    return min;
}

int main(){
    int arr1[] = {32, 43, 52, 22, 11};
    cout << minimum<int, 5>(arr1) << endl;
    float arr2[] = {42.1, 12.4, -11, 57.1};
    cout << minimum<float, 4>(arr2) << endl;
    return 0;
}