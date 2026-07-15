#include <iostream>
#include <vector>
#include <stack>
#include <queue>
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

int width(Node* root){
    if(! root) return 0;
    int ans=0;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(! q.empty()){
        int size=q.size();
        int mmin=q.front().second;
        int first,last;
        for(int i=0;i<size;i++){
            int cur=q.front().second-mmin;
            Node* node=q.front().first;
            q.pop();

            if(i==0) first=cur;
            if(i==size-1) last=cur;

            if(node->left)  q.push({node->left,cur*2+1});
            if(node->right)  q.push({node->right,cur*2+2});

        }
        ans=max(ans,last-first+1);
    }
    return ans;
}