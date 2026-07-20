#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <sstream>
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

string serial(Node* root){
    if(!root) return "";

    string s="";
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* cur=q.front();
        q.pop();

        if(cur==nullptr) s.append("#,");
        else s.append (to_string(cur->data)+',');
        if(cur!=nullptr){
            q.push(cur->left);
            q.push(cur->right);
        }

    }
    return s;
}

Node* deserialize(string data){
    if(data.size()==0) return nullptr;
    stringstream s(data);
    string str;
    getline(s,str,',');
    Node* root=new Node(stoi(str));
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* node=q.front();
        q.pop();

        getline(s,str,',');
        if(str=="#"){
            node->left=nullptr;
        }
        else{
            Node* leftNode=new Node(stoi(str));
            node->left=leftNode;
            q.push(leftNode);
        }
        getline(s,str,',');
        if(str=="#"){
            node->right=nullptr;
        }
        else{
            Node* rightNode=new Node(stoi(str));
            node->right=rightNode;
            q.push(rightNode);
        }

    }
    return root;
    
}