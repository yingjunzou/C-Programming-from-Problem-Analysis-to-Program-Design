#include <iostream>

using namespace std;

int main() {
    // Write your main here
    int totalHours = 0, hours;
    double payRate, pay, bonds;

    cout << "Enter the pay rate per hour: ";
    cin >> payRate;
    cout << "Enter the hours for week 1: ";
    cin >> hours;
    totalHours += hours;
    cout << "Enter the hours for week 2: ";
    cin >> hours;
    totalHours += hours;
    cout << "Enter the hours for week 3: ";
    cin >> hours;
    totalHours += hours;
    cout << "Enter the hours for week 4: ";
    cin >> hours;
    totalHours += hours;
    cout << "Enter the hours for week 5: ";
    cin >> hours;
    totalHours += hours;

    pay = payRate * totalHours * (1 - 0.14);
    bonds = pay * (1-0.11) * 0.25;

    cout << payRate * totalHours << endl;
    cout << pay << endl;
    cout << pay * 0.1 << endl;
    cout << pay * 0.01 << endl;
    cout << bonds << endl;
    cout << 0.5 * bonds << endl;

    return 0;
}
