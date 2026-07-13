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

bool balanced(Node* root){
    return ht(root) !=-1;
}
int ht(Node* root){
    if(root==nullptr){
        return 0;

    }
    int l=ht(root->left);
    if(l==-1) return -1;

    int r=ht(root->right);
    if(r==-1) return -1;
    if(abs(l-r)>1) return -1;

    return 1+max(l,r);
}