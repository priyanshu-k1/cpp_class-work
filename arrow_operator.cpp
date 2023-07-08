#include <iostream>

using namespace std;

class MyClass {
int count = 0;
public:
  MyClass() {
    count++;
    cout << "MyClass object created "<<count << endl;
    
  }

  ~MyClass() {
    count--;
    cout << "MyClass object destroyed "<<count << endl;
  }
};

int main() {
  MyClass myObject;
  return 0;
}