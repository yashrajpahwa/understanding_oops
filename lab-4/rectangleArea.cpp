#include <iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle(int l = 0, int b = 0):length(l), breadth(b){}
    ~Rectangle();
    void show();
    void area();
};

Rectangle::~Rectangle(){
    cout << "An object of rectangle class was destroyed!" << endl;
}

void Rectangle::show(){
    cout << "Length : " << length << " Breadth : " << breadth << endl;
}
void Rectangle::area(){
    cout << "Area : "  << length * breadth << endl; ;
}

int main(){
    Rectangle A[3] = {Rectangle(2, 3), Rectangle(5)};

    for(auto &i : A){
        i.show();
        i.area();
    }
    return 0;
}