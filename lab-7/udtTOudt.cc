#include <iostream>
#include <cmath>
using namespace std;

class Polar{
    public:
    float r;
    float thetaInRadians;
    Polar(float a, float b):r(a), thetaInRadians(b){}
};

class Cartesian{
    public:
    float x;
    float y;
    Cartesian(int a, int b):x(a), y(b){}
    Cartesian():x(0), y(0){}
    Cartesian& operator=(Polar obj){
        x = obj.r * cos(obj.thetaInRadians);
        y = obj.r * sin(obj.thetaInRadians);
        return *this;
    }
    void show(){
        cout << "X: " << x << "\nY: " << y << endl;
    }
};

int main(){
    Polar p(10, 5);
    Cartesian c;
    c = p;
    c.show();
    return 0;
}