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

vector<vector<int>> zigzag(Node* root){
   vector<vector<int>> result;
    if(root==nullptr) {
    return result;
    }
    queue<Node*> q;
    q.push(root);
    bool flag=true;

    while(!q.empty()){
        int s=q.size();
        vector<int> row(s);

        for(int i=0;i<s;i++){
            Node* node=q.front();
            q.pop();
            int index=(flag) ? i: (s-1-i);
            row[index]=node->data;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        flag=!flag;
        result.push_back(row);
       

    }
    return result;


}