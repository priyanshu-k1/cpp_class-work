#include <iostream>
#include<math.h>
using namespace std;

bool isPrime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (isPrime(n)) {
    cout << n << " is a prime number." << endl;
  } else {
    cout << n << " is not a prime number." << endl;
  }

  return 0;
}
