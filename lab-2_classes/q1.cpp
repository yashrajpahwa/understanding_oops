#include <iostream>
#include <string>

struct Student
{
  std::string Name, Degree, Hostel;
  int RollNo;
  float CGPA;

  void addDetails()
  {
    std::cin >> Name >> RollNo >> Degree >> Hostel >> CGPA;
  }

  void updateDetails() { addDetails(); }
  void updateCGPA(float c) { CGPA = c; }
  void updateHostel(std::string h) { Hostel = h; }

  void displaydetails()
  {
    std::cout << "Name - " << Name << std::endl;
    std::cout << "Roll No - " << RollNo << std::endl;
    std::cout << "Degree - " << Degree << std::endl;
    std::cout << "Hostel - " << Hostel << std::endl;
    std::cout << "CGPA - " << CGPA << std::endl;
  }
};

int main()
{
  Student s;
  s.addDetails();
  s.displaydetails();
  return 0;
}