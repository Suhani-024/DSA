#include <iostream>
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

Node* duplicates(Node* head){
    Node* temp=head;

    while(temp!=nullptr && temp->next !=nullptr){
        Node* nextnode=temp->next;

        while(nextnode != nullptr &&  nextnode->data==temp->data){
            Node* duplicate=nextnode;
            nextnode=nextnode->next;
            delete duplicate;

        }
        temp->next=nextnode;
        if(nextnode) nextnode->prev=temp;
        temp=temp->next;
    }
    return head;
}