#include <iostream>
#include <string>

class StudentRecord
{
private:
    std::string Name, Degree, Hostel;
    int RollNo;
    float CGPA;

public:
    void addDetails()
    {
        std::cin >> Name >> RollNo >> Degree >> Hostel >> CGPA;
    }

    void displaydetails()
    {
        std::cout << Name << " (" << RollNo << "): " << CGPA << std::endl;
    }
    void updateHostel(std::string h) { Hostel = h; }
};

int main()
{
    StudentRecord s;
    s.addDetails();
    s.displaydetails();
    return 0;
}