#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

struct Node{
    int data;
     Node* left;
     Node* right;

    Node(int val){
        data=val;
        left=right=nullptr;
    

    }
};

void preorder(Node* node){
    if(node==nullptr) return;

    //print(node->data);
    preorder(node->left);
    preorder(node->right);


}
void postorder(Node* node){
    if(node==nullptr) return;

   
    postorder(node->left);
    postorder(node->right);
    //print(node->data);


}

void inorder(Node* node){
    if(node==nullptr) return;

    
    inorder(node->left);
    //print(node->data);
    inorder(node->right);


}



int main(){
    return 0;
}
