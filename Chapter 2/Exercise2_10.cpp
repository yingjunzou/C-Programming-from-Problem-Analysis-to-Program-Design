#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Write your main here
    double num1, num2, num3, num4, num5;

    cout << "Enter five decimal numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << round(num1 + num2 + num3 + num4 + num5); 

    return 0;
}