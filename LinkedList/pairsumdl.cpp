#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev ;

    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* findtail(Node* head){
    Node* temp=head;
   
    while(temp->next != nullptr){
        temp=temp->next;
    }
    return temp;
}

vector<pair<int,int>> pairsum(Node* head,int sum){
    Node* left=head;
    Node* right=findtail(head);
    vector<pair<int,int>> ans;

    while(left->data <right->data){
        if(left->data+right->data==sum){
            ans.push_back({left->data,right->data});
            left=left->next;
            right=right->prev;
        }
        else if(left->data+right->data < sum){
            left=left->next;

        }
        else{
            right=right->prev;
        }

    }
    return ans;


}