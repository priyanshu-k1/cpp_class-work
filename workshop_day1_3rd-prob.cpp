#include<iostream>
using namespace std;

void palindrome(int i){
    int digit,sum=0,temp=i;
    while(i!=0){
        digit=i%10;
        sum=sum+digit;
        sum*=10;
        i=i/10;                      
    }
    if(temp==(sum/10)){
        cout<<"its a palindrome\n";
    }
    else{
        cout<<"its not a palindrome\n";
    }
}
  
int main(){
    int num;
    cout<<"Enter number\n";
    cin>>num;
    palindrome(num);
    
return 0;
}