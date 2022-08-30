#include <iostream>

using namespace std;

int main() {
    // Write your main here
    double hardDriveCapacity, storage;

    cout << "Enter the size of the hard drive: ";
    cin >> hardDriveCapacity;
    hardDriveCapacity = hardDriveCapacity * 1000 * 1000 * 1000;
    storage = hardDriveCapacity / 1024 / 1024 / 1024;
    cout << storage << endl;
    return 0;
}