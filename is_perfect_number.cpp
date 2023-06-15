//Wap to check weather number is a perfect number or not?
#include<iostream>
using namespace std;

void perfect_check(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<n<<" is a perfect number."<<endl;
    }
    else{
        cout<<n<<" is not a perfect number."<<endl;
    }
}

int main(){
    int num;
    cout<<"Enter a number."<<endl;
    cin >> num;
    perfect_check(num);
return 0;
}