//Wap to print the list of palindrome number between a range.......
#include<iostream>
using namespace std;

bool is_palindrome(int i){
    int digit,sum=0,temp=i;
    while(i!=0){
        digit=i%10;
        sum=sum+digit;
        sum*=10;
        i=i/10;                      
    }
    if(temp==(sum/10)){
        return true;
    }
    else{
       return false;
    }
}

void print_list(int start,int end){
    cout<<"Palindrome number in the range are:\n";
    for(int i=start;i<=end;i++){
        if(is_palindrome(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
int start, end;
cin >> start>>end;
print_list(start, end);
return 0;
}