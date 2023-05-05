#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number between 1 and 10: ";
  cin >> num;

  if (num > 0) {
    if (num <= 5) {
      cout << "You entered a number between 1 and 5." << endl;
    } else if (num <= 10) {
      cout << "You entered a number between 6 and 10." << endl;
    } else {
      cout << "You entered a number greater than 10." << endl;
    }
  } else {
    cout << "You entered a number less than or equal to 0." << endl;
  }

  return 0;
}