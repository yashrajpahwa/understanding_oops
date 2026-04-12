#include <iostream>
#include <cmath>
using namespace std;

double area(double side){
    return 0.4330127*side*side;
}
double area(double base, double height){
    return 0.5*base*height;
}
double area(double base, double side1, double side2){
    if(side1 != side2){
        cout << "Its an scalene triangle";
    }
    double height = sqrt(pow(side1, 2) - pow(base/2, 2));
    return 0.5*base*height;
}
int main(){
    int n;
    double a, b, c;
    cout << "Enter the number of sides you want to initialize: ";
    cin >> n;
    if(n == 1){
        cout << "Enter the side : ";
        cin >> a;
        cout << "AREA : " << area(a);
    }else if(n == 2){
        cout << "Enter the sides : ";
        cin >> a >> b;
        cout << "AREA : " << area(a, b);
    }else if(n == 3){
        cout << "Enter the sides : ";
        cin >> a >> b >> c;
        cout << "AREA : " << area(a, b, c);
    }else{
        cout << "Invalid number of sides." << endl;
    } 
    return 0;
}