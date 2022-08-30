#include <iostream>

using namespace std;

int main() {
    // Write your main here
    double testScore1, testScore2, testScore3, testScore4, testScore5;

    cout << "Enter five test scores: ";
    cin >> testScore1 >> testScore2 >> testScore3 >> testScore4 >> testScore5;
    cout << endl;

    cout << "Your average test score is: " 
         << (testScore1 + testScore2 + testScore3 + testScore4 + testScore5) / 5;

    return 0;
}