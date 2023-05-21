#include<iostream>
using namespace std;


class Binary_overloading{
public:
    int peri;
    Binary_overloading(int x,int y){
        peri=x+y;
    }
    Binary_overloading(){
         peri=0;
    }
    Binary_overloading operator +(Binary_overloading u){
        Binary_overloading temp;
        temp.peri=peri+u.peri;
        return temp;
    }
    void display(){
        cout<<"The sum of perimeter of both the rectange is:"<<peri;
    }
};

int main(){
    Binary_overloading bo(12,10);
    Binary_overloading bo2(11,9);
    Binary_overloading bo3;
    bo3=bo+bo2;
    bo3.display();
    return 0;
}