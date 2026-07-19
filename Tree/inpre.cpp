#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
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

Node* build(vector<int>& pre,vector<int>& in){
    map<int,int> mp;
    for(int i=0;i<in.size();i++){
        mp[in[i]]=i;
    }

    Node* root=buildT(pre,0,pre.size()-1,in,0,in.size()-1,mp);
    return root;

}

Node* buildT(vector<int>& pre,int preS,int preE,vector<int>& in,int inS,int inE,map<int,int> mp){
    if(preS>preE || inS>inE) return nullptr;

    Node* root=new Node(pre[preS]);
    int inR=mp[root->data];
    int numl=inR-inS;

    root->left=buildT(pre,preS+1,preS+numl,in,inS,inR-1,mp);
    root->right=buildT(pre,preS+numl+1,preE,in,inR+1,inE,mp);
    return root;
}