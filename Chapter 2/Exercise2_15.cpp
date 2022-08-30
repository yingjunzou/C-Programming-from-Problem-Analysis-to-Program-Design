#include <iostream>

using namespace std;

int main() {
    // Write your main here
    const double PI = 3.141593;
    int radius;
    double price;

    cout << "Enter the radius of the pizza: ";
    cin >> radius;
    cout << "Enter the price of the pizza: ";
    cin >> price;
    cout << "The price per square inch is: " 
         << price / (PI * radius * radius);

    return 0;
}