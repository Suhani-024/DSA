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

vector<int> inorder(Node* root){
    stack<Node*> st;
    Node* node=root;
    vector<int> inorder;

    while(true){
        if(node !=nullptr){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()==true)  break;
            node=st.top();
            st.pop();
            inorder.push_back(node->data);
            node=node->right;


        }
    }
    return inorder;
}