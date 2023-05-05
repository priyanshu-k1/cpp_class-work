#include<iostream>
using namespace std;


void calc(int l,int b){
    cout<<"Area of the rectangle="<<l*b<<endl;
    cout<<"Area of the rectangle="<<2*(l+b)<<endl;
}

int main(){
    int len,bre;
    cout<<"Enter the length and breadth of the rectangle\n";
    cin>>len>>bre;
    calc(len,bre);
    return 0;

}

