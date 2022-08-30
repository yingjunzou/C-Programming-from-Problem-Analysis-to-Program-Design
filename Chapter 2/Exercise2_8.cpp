//include statement(s)
#include <iostream>
#include <string>
//using namespace statement
using namespace std;

int main()
{

    //variable declaration
    const int SECRET = 11;
    const double RATE = 12.50;

    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    //executable statements
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << endl;
    cout << "The value of num1 = " << num1 << " and the value of num2 = "
         << num2 << "." << endl;
    
    newNum = num2 * 2 + num2;
    cout << "The new value of newNum = " << newNum << endl;

    cout << num1 * 2 + num2;
    cout << num1 * 2 + num2 + SECRET;

    newNum += SECRET;
    cout << "The new value of newNum = " << newNum << endl;

    cout << "Enter a last name: ";
    cin >> name;
    cout << endl;

    cout << "Enter a decimal number between 0 and 70: ";
    cin >> hoursWorked;
    cout << endl;

    wages = RATE * hoursWorked;

    cout << "Name:" << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: $" << wages << endl;

    //return statement
    return 0;
}