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

bool getpath(Node* root,vector<int> &arr,int x){
    if(! root) return false;

    arr.push_back(root->data);

    if(root->data==x) return true;
    if(getpath(root->left,arr,x)||getpath(root->right,arr,x)) return true;
    arr.pop_back();
    return false;
}

vector<int> solve(Node* A,int B){
    vector<int> arr;
    if(A==nullptr){
        return arr;
    }
    getpath(A,arr,B);
    return arr;

}