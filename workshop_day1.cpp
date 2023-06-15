//c++ program to add the even number in a digit........
#include<iostream>
using namespace std;
  
int main(){
    int val,sum=0,digit,num;
    cout<<"Enter the number:\n";
    cin>>val;
    while(val!=0){
        digit=val%10;
        val=val/10;
        if(digit%2==0){
           sum=sum+digit;
        }
    }
    cout<<"sum of even numbers in digit= "<<sum<<"\n";
    return 0;
}