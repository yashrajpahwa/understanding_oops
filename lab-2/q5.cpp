#include <iostream>
using namespace std;
class Complex{
    private:
    float real, imaginary;
    float giveReal();
    float giveImaginary();
    public:
    void setComplex(float, float);
    void displayComplex();
    void addComplex(Complex, Complex);
};

float Complex::giveReal(){
    return real;
}

float Complex::giveImaginary(){
    return imaginary;
}

void Complex::setComplex(float a, float b){
    real = a;
    imaginary = b;
}

void Complex::displayComplex(){
    cout << "The complex number is : " << real << "+" << imaginary << "i" << endl;
}

void Complex::addComplex(Complex x, Complex y){
    float a, b, i, j;
    a = x.giveReal();
    b = x.giveImaginary();
    i = x.giveReal();
    j = x.giveImaginary();

    real = a + i;
    imaginary = b + j;

    return;
}

int main(){
    Complex c1, c2, c3;
    c1.setComplex(2, 1.5);
    c2.setComplex(3,1);
    c3.addComplex(c1,c2);
    c2.displayComplex();
    c1.displayComplex();
    c3.displayComplex();
    return 0;
}