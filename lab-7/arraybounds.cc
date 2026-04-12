#include <iostream>
using namespace std;
class arrays{
    public:
    int *arr;
    int size;
    arrays(int n){
        size = n;
        arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = 0;
        }
    }
    ~arrays(){
        delete[] arr;
    }
    int& operator[](int n){
        if(n >= size || n < 0){
            throw out_of_range("Index out of bounds");
        }
        return arr[n];
    }
};

int main(){
    int i;
    cout << "Enter the size of the array : " << endl;
    cin >> i;
    arrays a1(i);
    //a1[-1]; throws out of bounds error
    for(int k = 0; k < i; k++){
        int data;
        cin >> data;
        a1[k] = data;
    }
    for(int j = 0; j < a1.size; j++){
        cout << j << " = " << a1[j] << '\n';
    }cout << endl;
    //cout << a1[a1.size];  throws error
    return 0;
}