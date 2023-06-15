#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node* next;

    Node(int val){ // here we are creating a Main head node of the link list....
        data = val; // setting the the new data of the node........
        next=NULL; // setting the next pointer to be next as there is no other value so fat......
    }
};
void insert_at_tail(Node* &head,int val){ // inster the value at the end of the node, taking the head by  reference ....
    Node* new_node = new Node(val); // this line will make  a node with value whatever u give.....
    Node* temp = head; // creating a temporary node to keep the track of the current end node....
    while(temp->next != NULL){// here we are iterating the link list to get the last node.......
        temp = temp->next; //asap we get the last node we are setting it with the null value....
    }
    temp->next = new_node;// after getting the last node we are adding the new node to  it .......
}

void search(Node* head,int val){
    Node* temp=head;
    int i=0,flag=0;
    while(temp!=NULL){
        if(temp->next==val){
            cout<<"\nThe element is present at index "<<i<<endl;
            flag=1;
        }
        i++;
        temp=temp->next;
    }
    if(flag==0){
        cout<<"\nThe element is absent\n";
    }
}

void display(Node* head){// displaying the values in the link list by value
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    display(head);
    search(head,5);
    return 0;
}