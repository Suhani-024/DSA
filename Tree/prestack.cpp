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

vector<int> pret(Node* root){
    vector<int> pre;
    if(root==nullptr)  return pre;

    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        root=st.top();
        st.pop();
        pre.push_back(root->data);

        if(root->right !=nullptr)  st.push(root->right);
        if(root->left!=nullptr)  st.push(root->left);
        
    }
    return pre;
}