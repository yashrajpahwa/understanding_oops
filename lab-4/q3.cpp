#include <iostream>
using namespace std;

class Shape
{
private:
    float dimension;
    int objectId;
    static int count;

public:
    Shape(float d = 0)
    {
        dimension = d;
        count++;
        objectId = count;
        cout << "Constructor called for Shape Object " << objectId << endl;
    }

    ~Shape()
    {
        cout << "Destructor called for Shape Object " << objectId << endl;
    }

    void display()
    {
        cout << "Shape " << objectId << " with dimension: " << dimension << endl;
    }
};

int Shape::count = 0;

int main()
{
    cout << "=== Destructor Verification Program ===" << endl;
    cout << endl;

    cout << "Creating Shape object 1:" << endl;
    Shape s1(5.5);
    s1.display();
    cout << endl;

    cout << "Creating Shape object 2:" << endl;
    Shape s2(10.0);
    s2.display();
    cout << endl;

    cout << "Creating array of Shape objects:" << endl;
    Shape shapeArray[3] = {Shape(2), Shape(4), Shape(6)};
    cout << endl;

    cout << "Displaying array elements:" << endl;
    for(int i = 0; i < 3; i++)
    {
        shapeArray[i].display();
    }
    cout << endl;

    cout << "Program ending - destructors will be called automatically:" << endl;
    cout << endl;

    return 0;
}
