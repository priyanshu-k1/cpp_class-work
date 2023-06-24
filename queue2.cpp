#include<iostream>
using namespace std;

class Queue{
public:
    int* arr;
    int front,back;
    int size;
    Queue(int x){
        size=x;
        front=-1;
        back=-1;
        arr=new int int[x];
    }
    void enqueue(int x){
        if(back>size){
            cout<<"Queue overflow\n";
        }
        else{
            back++;
            arr[back]=x;
            if(front==-1){
                front++;
            }
        }
    }
    void dequeue(){
        if()
    }
}

int main(){


return 0;
}