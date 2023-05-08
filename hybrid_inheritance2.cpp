#include<iostream>
using namespace std;

class Rectangle{
public:
    int width, length;
    void get_dimensions(int l,int b){
        length = l;
        width = b;
    }
};
class Perimeter:public Rectangle{
public:
    int peri;
    void calc_peri(){
        peri=2*(length+width);
        ;
    }

};
class Area:public Rectangle{
public:
    int ar;
    void calc_area(){
        ar=length+width;
    }
};
class Display_result:public Perimeter,public Area{
public:
    void show_data(){
         cout<<"Area of the rectangle :"<<ar<<endl;
        cout<<"Perimeter of the rectangle :"<<peri<<endl;
    }
   
};


int main(){
    cout<<"This is a example of multi inheritance and hierarchal inheritance\n";
    int len,wid;
    cout<<"Enter the length and height of the rectangle\n";
    cin>>len>>wid;
    Rectangle r1;
    Display_result ds;
    r1.get_dimensions(12,13);
    ds.calc_peri();
    ds.calc_area();
    ds.show_data();
    return 0;
}