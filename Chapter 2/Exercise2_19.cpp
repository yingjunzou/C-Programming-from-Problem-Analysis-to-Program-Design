#include <iostream>

using namespace std;

int main() {
    // Write your main here
    const int QUARTER = 25;
    const int DIME = 10;
    const int NICKEL = 5;

    int numQuarter, numDime, numNickel;

    cout << "Enter the number of quarters: ";
    cin >> numQuarter;
    cout << "Enter the number of dimes: ";
    cin >> numDime;
    cout << "Enter the number of nickels: ";
    cin >> numNickel;

    cout << numQuarter * QUARTER + numDime * DIME + numNickel * NICKEL;

    return 0;
}