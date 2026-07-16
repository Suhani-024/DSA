#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <unordered_map>
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

void parent(Node* root,unordered_map<Node*, Node*> &parenttrack,Node* target){
    queue<Node*> q;
    q.push(root);
    while(! q.empty()){
        Node* current=q.front();
        q.pop();
        if(current->left){
            parenttrack[current->left]=current;
            q.push(current->left);
        }
        if(current->right){
            parenttrack[current->right]=current;
            q.push(current->right);
        }
    }
}

vector<int> distance(Node* root,Node* target,int k){
    unordered_map<Node*, Node*> parenttrack;
    parent(root,parenttrack,target);

    unordered_map<Node*,bool> visited;
    queue<Node*> q;
    q.push(target);
    visited[target]=true;

    int cur=0;
    while(! q.empty()){
        int size=q.size();
        if(cur++ ==k) break;
        for(int i=0;i<size;i++){
            Node* current=q.front();
            q.pop();

            if(current->left && !visited[current->left]){
                q.push(current->left);
                visited[current->left]=true;
            }
            if(current->right && !visited[current->right]){
                q.push(current->right);
                visited[current->right]=true;
            }
            if(parenttrack[current] && !visited[parenttrack[current]]){
                q.push(parenttrack[current]);
                visited[parenttrack[current]]=true;
            }
        }
    }
    vector<int> result;
    while(!q.empty()){
        Node* current=q.front();
        q.pop();
        result.push_back(current->data);
    }
    return result;
}