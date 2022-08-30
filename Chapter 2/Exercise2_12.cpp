#include <iostream>

using namespace std;

int main() {
    // Write your main here
    int secs, hours, mins;

    cout << "Enter the elapsed time in seconds: ";
    cin >> secs;
    hours = secs / 3600;
    mins = (secs % 3600)/60;
    secs = secs - hours * 3600 - mins * 60;
    cout << hours << ":" << mins << ":" << secs;

    return 0;
}