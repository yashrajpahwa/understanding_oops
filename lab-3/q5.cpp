#include <iostream>
using namespace std;

class Rectangle{
private:
    float length, breadth;
public:
    void getValues();
    void displayArea();
};

void Rectangle::getValues(){
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> breadth;
    cout << endl;
}

void Rectangle::displayArea(){
    cout << "Area: " << length * breadth << endl;
}

int main(){
    Rectangle R[5];
    int j = 1;
    for(auto &i : R){
        cout << "For rectangle " << j++ << endl;
        i.getValues();
    }
    j = 1;
    for(auto &i : R){
        cout << "For rectangle " << j++ << endl;
        i.displayArea();
    }
}