#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    string make;
    string model;
    int year;
    protected:
    void getdata();
    void vshow(){
        cout << "Make : " << make << endl;
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
    }
};

class Trucks: public Vehicle{
    double load_capacity;
    protected:
    void loadData(){
        getdata();
        cout << "Enter load capacity : "; cin >> load_capacity;
        return;
    }
    void truckshow(){
        vshow();
        cout << "Load : " << load_capacity << endl;
    }
    
};

class RefrigeratedTruck:public Trucks{
    public:
    void temperature_control();
    void show();
    RefrigeratedTruck();
};

void RefrigeratedTruck::temperature_control(){
    cout << "Temperature control successful!" << endl;
    return;
}

void RefrigeratedTruck::show(){
    truckshow();
    return;
}

RefrigeratedTruck::RefrigeratedTruck(){
    loadData();
}

void Vehicle::getdata(){
    cout << "Enter the make : "; cin >> make;
    cout << "Enter the model : "; cin >> model;
    cout << "Enter the year : "; cin >> year;
    return;
}



int main(){
    RefrigeratedTruck mytruck;
    mytruck.temperature_control();
    mytruck.show();
    return 0;
}