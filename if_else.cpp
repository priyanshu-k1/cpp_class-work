#include<iostream>
using namespace std;

int main(){
    int num=0;
    cout<<"Enter a number\n";
    cin>>num;
    if(num%2==0){
        cout<<"Entered number is even\n";
    }
    else{
      cout<<"Entered number is odd\n";  
    }
    return 0;

}