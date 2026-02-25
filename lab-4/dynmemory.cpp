#include <iostream>
using namespace std;

class Test{
private:
    int value = 1;
    float data = 0.1f;
public:
    void show(){
        cout << value << ' ' << data << endl;
    }
    void initialize(int a, float b){
        value = a;
        data = b;
    }
};
int main(){
    int *a = new int;
    float *b = new float;
    int *arr = new int[2];
    float *f_arr = new float[3];
    Test *obj = new Test;
    Test*objarr = new Test[2];

    *a = 11;
    *b = 21.1f;
    *arr = 1;
    *(f_arr+1) = 2.0f;
    (*obj).initialize(212, 3.2f);
    (*obj).show();
    cout << *arr << ' ' << *(arr + 1) << endl;
    cout << *f_arr << ' ' << *(f_arr + 1) << ' ' << *(f_arr + 2) << endl;
    (*(objarr+1)).initialize(21, 22.11f);
    (*objarr).show();
    (*(objarr+1)).show();
    delete a;
    delete b;
    delete arr;
    delete f_arr;
    delete obj;
    delete objarr;
    return 0;

}
