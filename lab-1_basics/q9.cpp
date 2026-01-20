#include <iostream>
using namespace std;
int main() {
    float a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch (op) {
        case '+': cout << "Result: " << a + b << endl; break;
        case '-': cout << "Result: " << a - b << endl; break;
        case '*': cout << "Result: " << a * b << endl; break;
        case '/': cout << "Result: " << a / b << endl; break;
        default: cout << "Invalid operator" << endl;
    }
    return 0;
}
