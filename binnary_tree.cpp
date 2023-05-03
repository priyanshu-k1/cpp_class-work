#include<iostream>
using namespace std;
// MAXIUM NUMBER OF NODE AT LEVEL 'L' = 2^L;
// MINIUM NUMBER OF NODE IN A BINARY TREE OF HEIGHT 'H'= 2^H-1; WHERE H IS THE TOTAL NO OF LEVEL IN BINARY TREE.
 

class Node{         
    public:
     int data;
        Node* left;
        Node* right;
    Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;}
    };
       
int main(){
    void printBinaryTree(Node*node){
    if(node == nullptr){
        return;}
    cout<< node->data << " ";
    printBinaryTree(node->left);
    printBinaryTree(node->right);
    };
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    printBinaryTree(root);

    return 0;
}