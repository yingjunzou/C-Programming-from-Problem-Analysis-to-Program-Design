#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Write your main here
    const double CARTON = 3.78;
    double amount, cost, profit;

    cout << "Enter the total amount: ";
    cin >> amount;
    cout << "Enter the cost: ";
    cin >> cost;
    cout << "Enter the profit: ";
    cin >> profit;

    cout << round(amount / CARTON);
    cout << amount * cost;
    cout << profit * round(amount / CARTON);

    return 0;
}