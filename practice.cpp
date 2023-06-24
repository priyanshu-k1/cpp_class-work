#include<iostream>
using namespace std;

class Stack{
public:
    int *arr;
    int data;
    int top;
    int size;
    Stack(int x){
        size = x;
        arr=new int[size];
        top=-1;
    }
    void push(int val){
       if(top>size){
        cout<<"Stack overflow\n";
       }
       else{
         top++;
         arr[top] = val;
       }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow\n";
        }
        else{
            top--;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int top_disp(){
        return arr[top];
    }
    void display(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
  
int main(){

return 0;
}