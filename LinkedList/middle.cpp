#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* middle(Node* head){
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    Node* fast =head;
    Node* slow=head;

    while(fast !=nullptr && fast->next != nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}