#include<iostream>
using namespace std;

class Rectangle{
public:
    int width, height;
    void get_dimension(int x, int y){
        width=x;
        height=y;
    }
};
class Area:public Rectangle{
public:
    int ar;
    void calc_area(){
        ar=width*height;
        
    }
};
class Perimeter:public Rectangle{
public:
    int peri;
    void calc_peri(){
        peri=2*(width+height);
       
    }
};
class Print_data:public Area,public Perimeter{
public:
    void print(){
        cout<<"Area of the rectangle:"<<ar<<endl;
        cout<<"Perimeter of the rectangle:"<<peri<<endl;
    }
    
};

int main(){
    int len ,bre;
    cout<<"Enter the length and breadth of the rectangle\n"<<endl;
    cin>>len>>bre;
    Print_data pd;
    Rectangle r1;
    r1.get_dimension(len,bre);
    pd.calc_area();
    pd.calc_peri();
    pd.print();
    return 0;
}