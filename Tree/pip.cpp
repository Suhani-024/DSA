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

void pip(Node* root) {

    if (root == nullptr)
        return;

    stack<pair<Node*, int>> st;
    st.push({root, 1});

    vector<int> pre, in, post;

    while (!st.empty()) {

        auto it = st.top();
        st.pop();

        // Preorder
        if (it.second == 1) {

            pre.push_back(it.first->data);
            it.second++;
            st.push(it);

            if (it.first->left != nullptr)
                st.push({it.first->left, 1});
        }

        // Inorder
        else if (it.second == 2) {

            in.push_back(it.first->data);
            it.second++;
            st.push(it);

            if (it.first->right != nullptr)
                st.push({it.first->right, 1});
        }

        // Postorder
        else {

            post.push_back(it.first->data);
        }
    }

}

