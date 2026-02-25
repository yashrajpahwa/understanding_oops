#include <iostream>
#include <string>
#include <limits>
using namespace std;

class person{
    public:
    string name;
    string address;
    person(){
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
    }
    void show1(){
        show1();
        cout << "Name: " << name<< endl;
        cout << "Address: " << address<< endl;
    }
};

class student:virtual public person{
    public: 
    long long student_id;
    int grade;
    student(){
        cout << "Enter student id: ";
        cin >> student_id;       
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter grade: ";
        cin >> grade;       
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    void show2(){
        show1();
        cout << "Student id: " << student_id<< endl;
        cout << "Grade: " << grade<< endl;
    }
};

class teacher:virtual public person{
    public:
    long long employee_id;
    string department;
    teacher(){
        cout << "Enter the employee id: ";
        cin >> employee_id;       
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the department: ";
        getline(cin, department);
    }
    void show3(){
        cout << "Employee id: " << employee_id << endl;
        cout << "Department: " << department << endl;   
    }
};

class teaching_assistant:public student, public teacher{
    public:
    void show(){
        show1();
        show2();
        show3();
    }
};

int main(){
    person obj1;
    obj1.show1();
    student obj2;
    obj2.show2();
    teacher obj3;
    obj3.show3();
    teaching_assistant obj4;
    obj4.show();
    return 0;
}