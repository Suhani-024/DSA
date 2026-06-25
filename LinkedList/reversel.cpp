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
    if(head==nullptr){
        return head;
    }
    Node* temp=head;
    Node* prev=nullptr;
    Node* front=nullptr;
    while(temp!=nullptr){
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;



    }
    return prev;  //newhead;



}