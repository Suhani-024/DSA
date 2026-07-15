#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* lca(Node* root,Node* p, Node* q){
    if(root==nullptr || root==p ||root==q) return root;

    Node* left=lca(root->left,p,q);
    Node* right=lca(root->right,p,q);

    if(left==nullptr) return right;

    else if(right==nullptr) return left;
    else return root;
}