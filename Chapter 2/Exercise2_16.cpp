#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //named constants
    const double CARTON = 3.78;

    //declare variable
    double amount, cost, profit;
    cost = 0.38;
    profit = 0.27;

    //user input
    cout << "Please enter total amount of milk produced today in liters: ";
    cin >> amount;
    cout << endl;

    //output
    cout << "The number of milk cartons needed to hold milk: "
         << round(amount / CARTON) << endl;
    cout << "The cost of producing milk: "
         << amount * cost << endl;
    cout << "The profit of producing milk "
         << profit * round(amount / CARTON) << endl;

    return 0;
}