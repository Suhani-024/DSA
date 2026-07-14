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

bool isSame(Node* p,Node* q){
    if(p==nullptr || q==nullptr){
        return(p==q);
    }
    return(p->data==q->data) && isSame(p->left,q->left) && isSame(p->right,q->right);

}