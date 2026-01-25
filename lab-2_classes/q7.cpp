#include <iostream>

namespace SectionA
{
    int variable = 100;
    void display()
    {
        std::cout << "Displaying from SectionA" << std::endl;
    }
}

namespace SectionB
{
    int variable = 200;
    void display()
    {
        std::cout << "Displaying from SectionB" << std::endl;
    }
}

int main()
{
    std::cout << "SectionA variable: " << SectionA::variable << std::endl;
    SectionA::display();

    std::cout << "SectionB variable: " << SectionB::variable << std::endl;
    SectionB::display();

    return 0;
}