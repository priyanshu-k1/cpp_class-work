#include<iostream>
using namespace std;

class Rectangle{
    public:
    int width, height;
    Rectangle(){
        cout<<"Enter width and height"<<endl;
        cin>>width>>height;
    }
    int area(){
        return(width*height);
    };
     int peri(){
        return(2*(width+height));
     };
};

int main(){
    int area,perimeter;
    Rectangle rect;
    area=rect.area();
    perimeter=rect.peri();
    cout<<"Area: "<<area<<"|perimeter: "<<perimeter;
    return 0;
}