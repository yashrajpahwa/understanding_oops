#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    string stream;
    protected:
    Student(string n, int r, string s){
        name = n;
        rollno = r;
        stream = s;
    }
};

class Engineering:public Student{
    public:
    int data = 1;
    Engineering(string n, int r):Student(n, r, "Engineering"){}
};

class Medicine:public Student{
    public:
    int data = 11;
    Medicine(string n, int r):Student(n, r, "Medicine"){}    
};

class Science:public Student{
    public:
    int data = 1111;
    Science(string n, int r):Student(n, r, "Science"){}
};

int main(){
    Engineering objE("ABC", 123111);
    Medicine objM("XYZ", 123541);
    Science objS("PQR", 1273);

    Student *stdptr[3] = {&objE, &objM, &objS};
    cout << "NAME: " << stdptr[0]->name << " ROLL NO: " << stdptr[0]->rollno << " STREAM: " << stdptr[0]->stream << endl;
    cout << "NAME: " << stdptr[1]->name << " ROLL NO: " << stdptr[1]->rollno << " STREAM: " << stdptr[1]->stream << endl;
    cout << "NAME: " << stdptr[2]->name << " ROLL NO: " << stdptr[2]->rollno << " STREAM: " << stdptr[2]->stream << endl;
    /*We cannot access data from stdptr[i]->data as it is not in the base template*/
    return 0;
}