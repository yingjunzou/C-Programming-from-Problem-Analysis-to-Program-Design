#include <iostream>

using namespace std;                                   
 
int main()
{
    // Write your main here
    double capacity, milesPerGallon;

    cout << "Enter capacity: ";
    cin >> capacity;

    cout << "Enter miles per gallon";
    cin >> milesPerGallon;

    cout << capacity * milesPerGallon << " miles";

    return 0;
}