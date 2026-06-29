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

Node* deletekocc(Node* head, int k){
    Node* temp=head;

    while(temp != nullptr){
        if(temp->data==k){
            if(temp==head){
                head=head->next;
            }
           Node* nextnode=temp->next;
           Node* prevnode=temp->prev;

           if(nextnode) nextnode->prev=prevnode;
           if(prevnode)  prevnode->next=nextnode;
           delete temp;
           temp=nextnode;

        }
        else{
            temp=temp->next;
        }
    }
    return head;
}