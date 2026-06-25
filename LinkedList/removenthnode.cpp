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

Node* remove(Node* head,int n){
    if(head==nullptr ){
        return head;
    }
    Node* fast=head;
    Node* slow=head;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }

        while(fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
        }
        if (fast == nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;

        Node* delnode=slow->next;
        slow->next=slow->next->next;
        delete delnode;
        return head;

    
}