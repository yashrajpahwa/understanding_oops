#include <iostream>
using namespace std;

class Test{
    int data1;
    int data2;
    int data3;
    public:
    Test(){
        data1 = 0;
        data2 = 0;
        data3 = 0;
    }
    Test(int a){
        data1 = a;
        data2 = 0;
        data3 = 0;
    }
    Test(int a, int b){
        data1 = a;
        data2 = b;
        data3 = 0;
    }
    Test(int a, int b, int c){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void show(){
        cout << "Data 1 : " << data1 << " Data 2 : " << data2 << " Data 3 : " << data3 << endl;
        return;
    }

    void operator()(int a){
        data1 = a;
    } 
    void operator()(int a, int b){
        data1 = a;
        data2 = b;
    } 
    void operator()(int a, int b, int c){
        data1 = a;
        data2 = b;
        data3 = c;
    } 
};

int main(){
    Test obj1;
    cout << "Enter number of data points : " << endl;
    int n;
    cin >> n;
    if(n == 1){
        int a;
        cout << "Enter first data : " << endl;
        cin >> a;
        obj1(a);
    }else if(n == 2){
        int a, b;
        cout << "Enter first data : " << endl;
        cin >> a;
        cout << "Enter second data : " << endl;
        cin >> b;
        obj1(a, b);
        
    }else if (n == 3){
        int a, b, c;
        cout << "Enter first data : " << endl;
        cin >> a;
        cout << "Enter second data : " << endl;
        cin >> b;
        cout << "Enter third data : " << endl;
        cin >> c;
        obj1(a, b, c);
    }
    obj1.show();
    return 0;
}