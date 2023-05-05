#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number to print multiplicative table"<<endl;
    cin>>num;
    int i=1;
    while(i<=10){
        cout<<num<<"X"<<i<<"="<<num*i<<endl;
        i++;
    }
}