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



int ht(Node* node,int &diameter){
    if(node==nullptr) return 0;

    int l=ht(node->left,diameter);
    int r=ht(node->right,diameter);
    diameter=max(diameter,l+r);


    return 1+max(l,r);
}
int diameterbt(Node* root){
    int diameter=0;
     
    ht(root,diameter);
    return diameter;
}