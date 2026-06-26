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

Node* reverse(Node* head){
    Node* temp=head;
    Node* prev=nullptr;
    Node* front=nullptr;

    while(temp != nullptr){
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

bool palin(Node* head){
    if(head == nullptr || head->next == nullptr)
    return true;
    Node* fast=head;
    Node* slow=head;

    while(fast->next != nullptr  && fast->next->next != nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }

    Node* newhead=reverse(slow->next);
    Node* first=head;
    Node* second=newhead;

    while(second != nullptr){
        if(first->data != second->data){
            reverse(newhead);
            return false;

        }
        first=first->next;
        second=second->next;

    }
    reverse(newhead);
    return true;
}

