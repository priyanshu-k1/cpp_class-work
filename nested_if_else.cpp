#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 > 0) {
        if (num2 > 0) {
            cout << "Both numbers are positive." << endl;
        } else {
            cout << "First number is positive but second number is not." << endl;
        }
    } else {
        if (num2 > 0) {
            cout << "Second number is positive but first number is not." << endl;
        } else {
            cout << "Both numbers are negative or zero." << endl;
        }
    }

    return 0;
}
