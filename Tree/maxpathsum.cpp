#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <climits>
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

int ht(Node* node,int &maxi){
    if(node==nullptr) return 0;

    int l=max(0,ht(node->left,maxi));
    int r=max(0,ht(node->right,maxi));

    maxi=max(maxi,l+r+node->data);
    return max(l,r) +node->data;
}

int maxsum(Node* root){
    int maxi=INT_MIN;
    ht(root,maxi);
    return maxi;

}