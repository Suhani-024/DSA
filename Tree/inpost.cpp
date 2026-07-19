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
Node* build(vector<int>& post,vector<int>& in){
     map<int,int> mp;
    for(int i=0;i<in.size();i++){
        mp[in[i]]=i;
    }

    Node* root=buildT(post,0,post.size()-1,in,0,in.size()-1,mp);
    return root;

}
Node* buildT(vector<int>& post,int postS,int postE,vector<int>& in,int inS,int inE,map<int,int> mp){
    if(postS>postE || inS>inE) return nullptr;

    Node* root=new Node(post[postE]);
    int inR=mp[root->data];
    int numl=inR-inS;

    root->left=buildT(in,inS,inR-1,post,postS,postS+numl-1,mp);
    root->right=buildT(in,inR+1,inE,post,postS+numl,postE-1,mp);
    return root;
}