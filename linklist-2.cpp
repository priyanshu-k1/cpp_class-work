#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int num){
        data = num;
        next =NULL;
    }
};

void insert_at_tail(Node* &head,int val){
    cout<<"hey";
    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=new_node;
}
void insert_at_head(Node* &head,int val){
     Node* new_node=new Node(val);
     new_node->next=head;
     head = new_node;

}
void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;

    }
}

int main(){
    Node* head = NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    display(head);

    



return 0;
}