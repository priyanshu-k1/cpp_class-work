#include <iostream>
using namespace std;

void add(int x, int y){
    cout << "the sum of " << x << " and " << y <<"= "<<x+y<< endl;
}
int main(){
    int num1, num2;
    cout << "Enter 2 numbers\n";
    cin >> num1>>num2;
    add(num1, num2);
return 0;
}
