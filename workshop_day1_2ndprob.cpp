#include<iostream>
using namespace std;
  
int main(){
     int num,digit,circle=0,triangle=0;
     cout<<"Enter the number:\n";
     cin>>num;
     while(num!=0){
        digit=num%10;
        num=num/10;
        switch(digit){
            case 4:
                triangle++;
                break;
            case 6:
                circle++;
                break;
            case 8:
                circle+=2;
                break;
            case 9:
                circle++;
                break;
            case 0:
                circle++;
                break;
            default:
                cout<<"Invalid input\n";
        }
     }
     cout<<"number of triangles and circle = "<<triangle<<"  "<<circle<<endl;
return 0;
}