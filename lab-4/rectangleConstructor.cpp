#include <iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle():length(0), breadth(0){}
    Rectangle(int l, int b):length(l), breadth(b){}
    Rectangle(int a):length(a), breadth(a){}

    void show();
    void area();
};

void Rectangle::show(){
    cout << "Length : " << length << " Breadth : " << breadth << endl;
}


void Rectangle::area(){
    cout << "Area : "  << length *breadth << endl; ;
}

int main(){
    Rectangle A;
    Rectangle B(4);
    Rectangle C(2, 3);

    A.show();
    B.show();
    C.show();
    A.area();
    B.area();
    C.area();

    return 0;
}