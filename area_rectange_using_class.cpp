#include<iostream>
using namespace std;

class Rectangle{
    public:
    int width, height;
    void get_data(){
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
    rect.get_data();
    area=rect.area();
    perimeter=rect.peri();
    cout<<"Area: "<<area<<"|perimeter: "<<perimeter;
    return 0;
}