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
class class3:public Class1{
public:
  void print3(){
        cout<<"I am hierarchy inheritance example\n";
    }  
};

int main(){
    class3 c3;
    class2 c2;
    c2.print2();
    c3.print3();
    c2.print();
    return 0;
}