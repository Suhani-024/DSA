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

int max(Node* root){
    if(root==nullptr) return 0;

    int l=max(root->left);
    int r=max(root->right);
    return 1+max(l,r);
}