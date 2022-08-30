#include <iostream>

using namespace std;

int main() {
    // Write your main here
    double originalPrice, markUp, taxRate;

    cout << "Enter the original price: ";
    cin >> originalPrice;
    cout << "Enter the marked-up: ";
    cin >> markUp;
    cout << "Enter the tax rate: ";
    cin >> taxRate;

    cout << originalPrice << endl;
    cout << markUp << endl;
    cout << originalPrice*(1+markUp/100) << endl;
    cout << taxRate << endl;
    cout << originalPrice*(1+markUp/100)*taxRate/100 << endl;
    cout << originalPrice*(1+markUp/100)*(1+taxRate/100) << endl;

    return 0;
}