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

vector<int> post(Node* root) {

    vector<int> post;
    stack<Node*> st;
    Node* cur = root;

    while (cur != nullptr || !st.empty()) {

        if (cur != nullptr) {
            st.push(cur);
            cur = cur->left;
        }
        else {

            Node* temp = st.top()->right;

            if (temp == nullptr) {

                temp = st.top();
                st.pop();
                post.push_back(temp->data);

                while (!st.empty() && temp == st.top()->right) {
                    temp = st.top();
                    st.pop();
                    post.push_back(temp->data);
                }
            }
            else {
                cur = temp;
            }
        }
    }

    return post;
}