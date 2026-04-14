#include <iostream>
#include <string>
#include <limits>
using namespace std;
struct student{
    string name;
    int rollNo;
    string degree;
    string hostel;
    float CGPA;

    void updateName(){
        cout << "Enter name: ";
        getline(cin, name);
        return;
    }

    void updateRollNo(){
    cout << "Enter roll: ";
    cin >> rollNo;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return;
    }

    void updateDegree(){
    cout << "Enter degree: ";
    cin >> degree;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return;
    }

    void updateCGPA(){
    cout << "Enter CGPA: ";
    cin >> CGPA;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return;
    }

    void updateHostel(){
    cout << "Enter hostel: ";
    getline(cin, hostel);
    return;
    }

    void displayDetails(){
    cout << "Name : " << name << endl;
    cout << "Roll no: " << rollNo << endl;
    cout << "Degree : " << degree << endl;
    cout << "Hostel : " << hostel << endl;
    cout << "Current CGPA : " << CGPA << endl;
    }

    void addDetails(){
    cout << "Enter the details of the student : " << endl;
    updateName();
    updateRollNo();
    updateDegree();
    updateHostel();
    updateCGPA();
    return;
    }

    void updateDetails(){
    cout << "Enter the corresponding number for the detail you want to update " << endl;
    cout << "1 - name\n2 - rollno\n3 - degree\n4 - hostel\n5 - CGPA" << endl;
    int check;
    cin >> check;
    switch(check){
        case 1:
            updateName();
            break;
        case 2:
            updateRollNo();
            break;
        case 3:
            updateDegree();
            break;
        case 4:
            updateHostel();
            break;
        case 5:
            updateCGPA();
            break;
        defualt:
            cout << "Wrong input" << endl;

    }
}
};


int main(){
    int n = 1;
    student s[n];

    for(int i = 0; i < n; i++){
        cout << "The details of the student " << i + 1 << endl;
        s[i].addDetails();
    }

    for(int i = 0; i < n; i++){
        cout << "The details of the student " << i + 1 << endl;
        s[i].displayDetails();
    }

    return 0;
}