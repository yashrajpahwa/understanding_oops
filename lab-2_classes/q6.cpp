#include <iostream>

int value = 100;

class ScopeDemo
{
public:
    static int staticValue;
    void displayMessage();
};

int ScopeDemo::staticValue = 50;

void ScopeDemo::displayMessage()
{
    std::cout << "Function defined outside the class called." << std::endl;
}

int main()
{
    int value = 10;

    std::cout << "Local value: " << value << std::endl;
    std::cout << "Global value: " << ::value << std::endl;

    std::cout << "Static variable: " << ScopeDemo::staticValue << std::endl;

    ScopeDemo obj;
    obj.displayMessage();

    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;
    std::cout << "Final Answer: " << input << std::endl;

    return 0;
}