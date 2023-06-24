#include<iostream>
using namespace std;

class Queue{
public:
    int* arr;
    int front;
    int back;
    int size;
    Queue(int x){
        size = x;
        arr = new int[size];
        front = -1;
        back = -1;
    }
    void enqueue(int x){
        if(((back+1)%size)==0){
            back=0;
            arr[back]=x;
        }
        else{
            back++;
            arr[back]=x;
        }
        if(front==-1){front++;}
    }
    void dequeue(){
        if(((front+1)%size)==0){
            front=0;
        }
        else{
            front++;
        }
    }
    int peek(){
        if(front==-1|| front>back){
            cout<<"There is no element in the queue.\n";
        }
        else{
            return arr[front];
        }
    }
    bool isEmpty(){
        if(front==-1 || front>back){
            return true;
        }
        else{
            return false;
        }
    }
    void display(){
        for(int i = front; i<=back;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }

};


int main(){
    Queue q(6);
    int opt,val;
    bool loop=true;
    while(true){
    cout<<"1-enqueue\n2-dequeue\n3-display\n4-stop\n";
    cin>>opt;
    if(opt==1){
        cout<<"Enter a value\n";\
        cin>>val;
        q.enqueue(val);
    }
    else if(opt==2){
        q.dequeue();
    }
    else if(opt==3){
        cout<<"Element in the queue are:-\n";
        q.display();
    }
    else{
        break;
    }
    }
return 0;
}