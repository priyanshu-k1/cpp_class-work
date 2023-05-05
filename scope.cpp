#include<iostream>
using namespace std;

class Rectangle{
    public:
    int l,w;
    void get_data(){
        cout<<"enter length and width\n";
        cin>>l>>w;
    }
    void cal_area();
    void peri();
    // friend sample();
};
void Rectangle::cal_area(){
        int area;
        area=l*w;
        cout<<"the area of the rectangle is "<<area<<endl;    
    }
void Rectangle::peri(){
        int p;
        p=2*(l+w);
        cout<<"The perimeter of the rectangle is "<<p<<endl;
    }
int  main(){
    Rectangle r1;
    r1.get_data();
    r1.cal_area();
    r1.peri()
    return 0;
}