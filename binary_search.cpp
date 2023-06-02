#include<iostream>
using namespace std;

int main(){
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int key,position;
    int mid,low=0,high=10;
    cout<<"Enter the element you want to find in array\n";
    cin>>key;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"The element "<<key<<" present at "<<mid+1<<endl;
            break;
        }
        else if(arr[mid]<key){
            low=mid;
            high=10;
            mid=(low+high)/2;

        }
        else if(arr[mid]>key){
            high=mid;
            low=00;
            mid=(low+high)/2;
        }
        else{
            cout<<"The element is absent \n";
        }
    }
}