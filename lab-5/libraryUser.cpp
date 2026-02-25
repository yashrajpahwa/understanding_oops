#include <iostream>
#include <string>
using namespace std;

class LibraryUser
{
    string Name;
    long long ID;
    long long contactNumber;

public:
    LibraryUser(string n, long long id, long long cn) : Name(n), ID(id), contactNumber(cn) {}

protected:
    void show()
    {
        cout << Name << endl
             << ID << endl
             << contactNumber << endl;
    }
};

class student : public LibraryUser
{
    int gradeLevel;

public:
    student(string n, long long id, long long cn, int g) : LibraryUser(n, id, cn), gradeLevel(g) {}
    void showstudent()
    {
        show();
        cout << gradeLevel << endl;
    }
};

class teacher : public LibraryUser
{
    string department;

public:
    teacher(string n, long long id, long long cn, string department) : LibraryUser(n, id, cn), department(department) {}
    void showteacher()
    {
        show();
        cout << department << endl;
    }
};

int main()
{
    student obj("Yashraj", 1024150095LL, 9899395955LL, 2);
    teacher job("Rajendra Kumar Raul", 1, 9834112291LL, "Computer Science");
    obj.showstudent();
    job.showteacher();
    return 0;
}