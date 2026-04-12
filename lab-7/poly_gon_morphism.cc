#include <iostream>
using namespace std;

class Polygon{
    protected:
    double width, height;
    public:
    void set_value(double w, double h){
        width = w;
        height = h;
    }
    virtual double calculateArea() = 0;
};

class Triangle:public Polygon{
    public:
    double calculateArea(){
        return width*height*0.5;
    }
};

class Rectangle:public Polygon{
    public:
    double calculateArea(){
        return width*height;
    }
};

int main(){
    Polygon *ptr;
    cout << "Enter 1 for triangle or 2 for rectangle : " << endl;
    int var;
    do{
        cin >> var;
        if(var == 1)
        ptr = new Triangle;
        else if(var == 2)
        ptr = new Rectangle;
    }while(var != 1 && var != 2);
    ptr ->set_value(25, 0.1);
    double area = ptr ->calculateArea();
    cout << "Area : " << area <<endl;
    return 0;
}