#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number between 1 and 5: ";
  cin >> num;

  if (num == 1) {
    cout << "You entered one." << endl;
  } else if (num == 2) {
    cout << "You entered two." << endl;
  } else if (num == 3) {
    cout << "You entered three." << endl;
  } else if (num == 4) {
    cout << "You entered four." << endl;
  } else if (num == 5) {
    cout << "You entered five." << endl;
  } else {
    cout << "Invalid input." << endl;
  }

  return 0;
}
