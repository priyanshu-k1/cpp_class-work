#include<iostream>
using namespace std;

void convert(int num){
    switch(num){
        case 0:
            cout<<"zero ";
            break;
        case 1:
            cout<<"one ";
            break;
        case 2:
            cout<<"two ";
            break;
        case 3:
            cout<<"three ";
            break;
        case 4:
            cout<<"four ";
            break;
        case 5:
            cout<<"five ";
            break;
        case 6:
            cout<<"six";
            break;
        case 7:
            cout<<"seven ";
            break;
        case 8:
            cout<<"eight ";
            break;
        case 9:
            cout<<"nine";
            break;
        default:
            cout<<"unknown";
    }
}

void extract(int x){
    while(x!=0){
        int digit=x%10;
        x=x/10;
        convert(digit);
    }
}
  
int main(){
    int val;
    cin>>val;
    extract(val);
return 0;
}

//when the time and space  compexity is (1) we have to use switch case.....