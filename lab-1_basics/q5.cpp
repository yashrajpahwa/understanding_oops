#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Line 1" << endl;
    cout << "Line 2\n";
    cout << "Tab\tSeparated" << endl;
    cout << "Backspace\b" << endl;
    cout << setw(10) << "Width 10" << endl;
    return 0;
}
