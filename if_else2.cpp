#include<iostream>
using namespace std;

int main(){
    int age=0;
    cout<<"Enter a number\n";
    cin>>age;
    if(age>=18){
        cout<<"You are can vote\n";
    }
    else{
      cout<<"You are can not vote\n";  
    }
    return 0;

}