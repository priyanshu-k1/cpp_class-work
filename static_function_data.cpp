#include<iostream>
using namespace std;

class Chandana{
    public:
        static int love;
        string name;
        Chandana(){
            cout <<"Enter the name\n";
            cin >>name;
            love++;
        }
        void display(){
            cout<<"The name is "<<name<<endl;
            cout<<"percentage= "<<love<<" %"<<endl;
        }
};

int Chandana::love;
  
int main(){
    Chandana p1,p2;
    p1.display();
    p2.display();

return 0;
}