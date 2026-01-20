#include <iostream>
using namespace std;
int main() {
    int days;
    cout << "Enter number of days late: ";
    cin >> days;
    if (days <= 5) {
        cout << "Fine: 50 paise" << endl;
    } else if (days <= 10) {
        cout << "Fine: 1 rupee" << endl;
    } else if (days <= 30) {
        cout << "Fine: 5 rupees" << endl;
    } else {
        cout << "Membership cancelled" << endl;
    }
    return 0;
}
