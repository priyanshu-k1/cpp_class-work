#include<iostream>
using namespace std;

class Uniary_operator{
public:
    int var=0,value;
    Uniary_operator(){
        cout<<"Enter a number: ";
        cin >> var;
        cout<<"\n";
    }
     void  operator ++(){
        if(var%2==0){
            value=1;
        }
        else{
            value=0;
        }
    };
};
int main(){
    Uniary_operator uo;
    ++uo;
    if(uo.value==0){
        cout<<"the number is odd\n";
    }
    else{
        cout<<"the number is  even\n";
    }
    return 0;
}