#include<iostream>
using namespace std;

class Class1{
public:
    void print(){
        cout<<"Hello world\n";
    }
};
class class2:public Class1{
    void print2(){

        cout<<"I am child class\n";
    }
};
class class4:public Class3,public class2{
    void print3(){
        cout<<"this is a example of single amd multilevel inheritance:- hybrid inheritance \n";
    }

}
;

int main(){


    return 0;
}