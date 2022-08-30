#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Write your main here
    double num;

    cout << "Enter a decimal number: ";
    cin >> num;
    cout << fixed << int(round(num));

    return 0;
}