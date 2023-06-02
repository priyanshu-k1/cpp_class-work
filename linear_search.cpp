#include<iostream>
using namespace std;

int main(){
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int key,flag,position,i=0;
    cout<<"Enter the element you want to find in array\n";
    cin>>key;
    for(i;i<10;i++){
        if(arr[i]==key){
            position=arr[i];
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    cout<<flag<<endl;
    if(flag==1){
        cout<<"The element is at index:  "<<i+1<<"\n";
    }
    else{
        cout<<"The element is absent in array: "<<endl;
    }
    return 0;
}