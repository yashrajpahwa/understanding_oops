#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    Rectangle(float l = 0, float b = 0)
    {
        length = l;
        breadth = b;
    }

    ~Rectangle()
    {
    }

    float getArea()
    {
        return length * breadth;
    }

    void display()
    {
        cout << "L: " << length << " B: " << breadth << " Area: " << getArea() << endl;
    }
};

int main()
{
    cout << "--- Array of Rectangle Objects ---" << endl;
    cout << endl;

    Rectangle rects[5] = {
        Rectangle(),
        Rectangle(5),
        Rectangle(4, 3),
        Rectangle(6, 5),
        Rectangle(7)
    };

    cout << "Displaying areas of each rectangle in array:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "Rectangle " << (i+1) << ": ";
        rects[i].display();
    }

    cout << endl;
    cout << "Destructor will be called automatically for all objects." << endl;

    return 0;
}
