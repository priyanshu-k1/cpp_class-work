#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    if(num==0 || num==1){
        return 1;
    }
    else{
        for(int i=num;i>=1;i--){
            fact=fact*i;
        }
        return fact;
    }
}
int extract(int num){
    int digit,sum=0;
    while(num!=0){
    digit=num%10;
    num=num/10;
    sum+=factorial(digit);
    }
    return sum;
}
int main(){
    int value,num;
    cout<<"enter a number"<<endl;
    cin>>value;
    num=extract(value);
    if(num==value){
        cout<<"YES\n";}
    else{
        cout<<"NO\n";}
return 0;
}