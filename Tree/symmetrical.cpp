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
bool isSymm(Node* root){
    return root==nullptr || sym(root->left, root->right);
}

bool sym(Node* left,Node* right ){
    if(left==nullptr || right==nullptr){
        return left==right;
    }
    if(left->data !=right->data) return false;

    return sym(left->left,right->right) && sym(left->right,right->left);
}