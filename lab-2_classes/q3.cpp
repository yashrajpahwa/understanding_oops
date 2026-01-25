#include <iostream>

class Processor
{
private:
    void pvtFunc()
    {
        std::cout << "Hello world." << std::endl;
    }

public:
    void runTask()
    {
        std::cout << "Task 1 Complete." << std::endl;
        pvtFunc();
    }
};

int main()
{
    Processor p;
    p.runTask();
    return 0;
}