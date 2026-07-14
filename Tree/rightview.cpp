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

vector<int> right(Node* root){
    vector<int> ds;
    recusion(root,0,ds);
    return ds;
}
void recusion(Node* root,int level,vector<int> &ds){
    if(root==nullptr) return;
    if(ds.size()==level)
    ds.push_back(root->data);
    recusion(root->right,level+1,ds);
    recusion(root->left,level+1,ds);
}