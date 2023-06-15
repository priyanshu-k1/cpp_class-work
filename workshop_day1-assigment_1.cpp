//print a list of prime number in given range.
#include<iostream>
using namespace std;

bool is_prime(int n){
  for(int i = 2; i<n; i++){
    if (n % i == 0){
      return false;
    }
  }
  return true;
}
void print_list(int start, int end){
    cout<<"Prime numbers in the range are:\n";
    for(int i = start; i <= end; i++){
        if(is_prime(i)){
            cout<<i<<" ";
        }
    }
}
 
int main(){
int start, end;
cin >> start>>end;
print_list(start, end);
return 0;
}