#include<iostream>
using namespace std;

class Node{
public:
    int top;
    int* arr;
    int maxsize;
    Node(int x){
        maxsize = x;
        arr = new int[x];
        top=-1;
    }
    void insert(int x){
        if(top>maxsize){
            cout<<"Stack overflow\n";
        }
        else{
            top++;
            arr[top] = x;
           
        }
    }
    void display(){
        for(int i=0; i<maxsize;i++){
            cout<<"|"<<arr[i]<<"";
        }
        cout<<"|";

    }

}