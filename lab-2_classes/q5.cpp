#include <iostream>

class Complex
{
    float real;
    float imaginary;

public:
    void setComplex(float r, float i);
    void readComplex();
    Complex sumComplex(Complex c);
};

void Complex::setComplex(float r, float i)
{
    real = r;
    imaginary = i;
}

void Complex::readComplex()
{
    std::cout << "i: " << real << " + j: " << imaginary << std::endl;
}

Complex Complex::sumComplex(Complex c)
{
    Complex temp;
    temp.real = c.real + real;
    temp.imaginary = c.imaginary + imaginary;
    return temp;
}

int main()
{
    std::cout << " " << std::endl;
    Complex c1, c2;
    c1.setComplex(1.5, 2.4);
    c2.setComplex(3.1, 2.8);
    Complex c3 = c1.sumComplex(c2);
    c3.readComplex();
    return 0;
}