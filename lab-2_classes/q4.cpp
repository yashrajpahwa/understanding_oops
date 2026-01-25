#include <iostream>

class Rectangle
{
    float width;
    float height;
    void read();

public:
    void getData();
    void calculateArea();
};

void Rectangle::getData()
{
    std::cin >> width;
    std::cin >> height;
    read();
}

void Rectangle::read()
{
    std::cout << width << std::endl;
    std::cout << height << std::endl;
}

int main()
{
    Rectangle R;
    R.getData();
    return 0;
}