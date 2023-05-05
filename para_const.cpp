#include<iostream>
using namespace std;

class Rectangle{
    public:
    int width, height;
    Rectangle(int wid,int len){
        width=wid;
        height=len;
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
    Rectangle rect(12,13);
    area=rect.area();
    perimeter=rect.peri();
    cout<<"Area: "<<area<<"|perimeter: "<<perimeter;
    return 0;
}