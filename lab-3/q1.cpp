#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    Rectangle(float side)
    {
        length = side;
        breadth = side;
    }

    float getArea()
    {
        return length * breadth;
    }

    void display()
    {
        cout << "Length: " << length << ", Breadth: " << breadth;
        cout << ", Area: " << getArea() << endl;
    }
};

int main()
{
    cout << "--- Rectangle Class Demonstration ---" << endl;

    Rectangle rect1;
    cout << "Rectangle 1 (Default): ";
    rect1.display();

    Rectangle rect2(5, 4);
    cout << "Rectangle 2 (5 x 4): ";
    rect2.display();

    Rectangle rect3(7, 6);
    cout << "Rectangle 3 (7 x 6): ";
    rect3.display();

    Rectangle rect4(5);
    cout << "Rectangle 4 Square (5 x 5): ";
    rect4.display();

    return 0;
}
