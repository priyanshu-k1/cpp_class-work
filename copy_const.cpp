#include <iostream>
using namespace std;

class rectangle{
public:
    int length,breadth;
    rectangle(){
        cout<<"Enter the length and breadth of rectangle"<<endl;
        cin>>length>>breadth;}

    rectangle(rectangle &obj){
               length=obj.length;
               breadth=obj.breadth;}
    void calarea(){
           	    int area;
                area=length*breadth;
                cout<<"\nthe area is:"<<area<<endl;}};
      
int main(){
    rectangle r1;
    r1.calarea();
    rectangle r2;
    r2=r1;
    r2.calarea();
}