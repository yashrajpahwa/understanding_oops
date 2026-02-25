#include <iostream>

int Global = 1;
class Demo{
    public:
    static int staySame;
};

int Demo::staySame = 10;
int main(){
    int Global = 0;
    std::cout << Global << '\n' << ::Global << std::endl;
    std::cout << Demo::staySame << std::endl;
}