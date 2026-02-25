#include <iostream> 
#include <string>
using namespace std;

class Speedometer{
    public:
    float speed;
    Speedometer(float dis, float time){
        speed = dis/time;
    }
};

class FuelGauge{
    public:
    float fuel;    
    FuelGauge(float x):fuel(x){}
};

class Thermometer{
    public:
    float temp;
    Thermometer(float x):temp(x){}
};

class CarDashboard:public Speedometer, public FuelGauge, public Thermometer{
    public:
    CarDashboard(float w, float x, float y, float z):Speedometer(x, y), FuelGauge(z), Thermometer(w){}
    void display(){
        cout << "Speed : " << speed << " km/hr\nFuel: " << fuel << " L\nTemperature : " << temp << " deg C" << endl;
    }
};

int main(){
    CarDashboard r(89, 50.5, 5, 6.7);
    r.display();
    return 0;
}