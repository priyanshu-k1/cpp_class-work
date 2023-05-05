#include<iostream>
using namespace std;

double calc(){
    int radius;
    double area;
    cout<<"Enter the radius of the the circle in cm "<<endl;
    cin>>radius;
    area=3.14*radius*radius;
    return area;
}

int main(){
    double area;
    area=calc();
    cout<<"Area of the circle= "<<area<<" cm"<<endl;
    return 0;
}