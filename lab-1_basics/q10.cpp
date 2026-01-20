#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0)
        cout << "Even (using if-else)" << endl;
    else
        cout << "Odd (using if-else)" << endl;
    
    (n % 2 == 0) ? cout << "Even (using conditional)" << endl : cout << "Odd (using conditional)" << endl;
    return 0;
}
