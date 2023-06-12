#include<iostream>
using namespace std;


class Stack{
public:
    int top;
    int* arr;
    int maxsize;
    Stack(int x){
        maxsize =x;
        arr= new int[x];
        top=-1;
    }
    void push(int x){
        if(top==maxsize-1){
            cout<<"Stack overflow\n";
        }
        else{
            top++;
            arr[top]=x;
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
    void top_disp(){
        if(top==-1){
            cout<<"Stack is empty\n";
        }
        else{
            cout<<"Element in top :"<<arr[top]<<"\n";
        }
    };
    void  isempty(){
        if(top==-1){
           cout<<"The stack is empty";
        }
        else{
           cout<<"The stack is not empty";
        }
    }
    void display(){
        if(top==-1){
            cout<<"Stack is empty\n";
        }
        else{
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
        }
    }

};
int main(){
    Stack stk(5);
    int option,val;
    while(true){
        cout<<"\n1-push\n2-pop\n3-top\n4-empty\n5-display\n6-exit\n";
        cin>>option;
        if(option==1){
            cout<<"Enter the value to insert: ";
            cin>>val;
            stk.push(val);
            cout<<"\n";
        }
        else if(option==2){
            cout<<"Top element have been pop\n";
            stk.pop();
        }
        else if(option==3){
          stk.top_disp(); 
        }
        else if(option==4){
             stk.isempty();
        }
        else if(option==5){
            stk.display();
        }
        else if(option==6){
            break;
        }
        else{
            cout<<"Invalid entry, rerun the program"<<endl;
            break;
        }
    }
    
    return 0;
}