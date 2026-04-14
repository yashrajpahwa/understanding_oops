
#include <iostream>
using namespace std;
class Rectangle
{
private:
    float width;
    float length;

public:
    void getData();
    void calculateArea();
};

void Rectangle::getData()
{
    cout << "Enter the length : ";
    cin >> length;
    cout << "\nEnter the width : ";
    cin >> width;
}

void Rectangle::calculateArea()
{
    cout << "The area of the rectangle is : " << length * width << endl;
}

int main()
{
    Rectangle R;
    R.getData();
    R.calculateArea();
}