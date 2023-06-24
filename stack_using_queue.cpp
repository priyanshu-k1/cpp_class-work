#include<iostream>
using namespace std;
#include<queue>

class Stack{
    queue<int> q1;
    queue<int> q2;
    int size;
public:
    int front;
    Stack(){
        size=0;
    }
    void push_val(int n){
        q1.push(n);
        size++;
        while(!q1.empty()){
            front=q1.front();
            q1.pop();
            q2.push(front);
        }
        queue<int> temp;
        temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop_val(){
        q1.pop();
        size--;
    }
    int len(){
        return size;
    }
    int top(){
        return q1.front();
    }


};

int main(){
    Stack sk;
    sk.push_val(12);
    sk.push_val(13);
    sk.push_val(14);
    sk.push_val(15);
    sk.push_val(16);
    sk.push_val(17);
    cout<<sk.top()<<endl;
    sk.pop_val();
    cout<<sk.top()<<endl;


return 0;
}