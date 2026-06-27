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

bool loop(Node* head){
    Node* fast=head;
    Node* slow=head;

    while(fast != nullptr && fast->next != nullptr){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;

        }
        //return false;
    }
     return false;
}