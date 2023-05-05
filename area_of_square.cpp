#include<iostream>
using namespace std;

int calc_area(int a){
    int area;
    return area=a*a;
}
int calc_peri(int a){
    int perimeter;
    return perimeter=4*a;}

int  main(){
    int side,area,perimeter;
    cout<<"Enter the area of 1 side\n";
    cin>>side;
    area=calc_area(side);
    perimeter=calc_peri(side);
    cout<<"Area of thr sqare ="<<area<<endl;
    cout<<"Perimeter of thr sqare ="<<perimeter<<endl;

    return 0;

}