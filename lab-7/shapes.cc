#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void display() = 0;
    virtual double area() = 0;
};

class Circle: public Shape{
    private:
    double radius;
    public:
    double area() override{
        return 3.1415*radius*radius;
    }
    void display(){
        cout << "The shape is a circle" << endl;
    }
    Circle(){
        cout << "Enter the radius: ";
        cin >> radius;
    }
};
class Rectangle: public Shape{
    private:
    double length;
    double breadth;
    public:
    double area() override{
        return length*breadth;
    }
    void display(){
        cout << "The shape is a rectangle" << endl;
    }
    Rectangle(){
        cout << "Enter the length and breadth: ";
        cin >> length >> breadth;
    }
};
class Triangle: public Shape{
    private:
    double base;
    double height;
    public:
    double area() override{
        return 0.5*base*height;
    }
    void display(){
        cout << "The shape is a triangle" << endl;
    }
    Triangle(){
        cout << "Enter the base and height: ";
        cin >> base >> height;
    }
};

int main(){
    Shape *shapeptr;
    int check;
    do{
        cout << "Enter 1 for circle, 2 for rectangle and 3 for triangle. Press 0 to exit." << endl;
        cin >> check;
        switch (check){
            case 1:
            shapeptr = new Circle;
            shapeptr->display();
            cout << "Area : " << shapeptr->area() << endl;
            break;
            case 2:
            shapeptr = new Rectangle;
            shapeptr->display();
            cout << "Area : " << shapeptr->area() << endl;
            break;
            case 3:
            shapeptr = new Triangle;
            shapeptr->display();
            cout << "Area : " << shapeptr->area() << endl;
            break;
            case 0:
            cout << "Terminating." << endl; 
            break;
            default:
            cout << "wrong input!" << endl;
            break;
        }
    }while(check);

}