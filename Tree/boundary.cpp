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

bool isLeaf(Node* root){
    return (root->left == nullptr && root->right == nullptr);
}

void left(Node* root,vector<int> &res){
    Node* cur=root->left;
    while(cur){
        if(!isLeaf(cur)) res.push_back(cur->data);
        if(cur->left) cur=cur->left;
        else cur=cur->right;
    }
}

void right(Node* root,vector<int> &res){
    Node* cur=root->right;
    vector<int> temp;

    while(cur){
        if(!isLeaf(cur)) temp.push_back(cur->data);
        if(cur->right) cur=cur->right;
        else cur=cur->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        res.push_back(temp[i]);
    }

    
}

void inorder(Node* root,vector<int> &res){
    if(!isLeaf (root)) {
        res.push_back(root->data);
        return;
        
    }
    if(root->left) inorder(root->left,res);
        if(root->right) inorder(root->right,res);
    
}

vector<int> boundary(Node* root){
    vector<int> res;
    if(!root) return res;
    if(!isLeaf(root)) res.push_back(root->data);
    left(root,res);
    inorder(root,res);
    right(root,res);
    return res;
}