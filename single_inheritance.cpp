#include<iostream>
using namespace std;


class Class1{
public:
    void print(){
        cout<<"Hello world\n";
    }
};
class class2:public Class1{
public:
    void print2(){

        cout<<"I am single inheritance example\n";
    }
};

int main(){
    class2 c1;
    c1.print();
    c1.print2();
    return 0;
}