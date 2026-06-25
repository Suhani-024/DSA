#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
       // back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        //back=nullptr;
    }
};
Node* sort(Node* head){
    if(head==nullptr || head->next==nullptr){
        return head;
    }

    Node* zerohead=new Node(-1);      Node* zero=zerohead;
    Node* onehead=new Node(-1);       Node* one=onehead;           
    Node* twohead=new Node(-1);       Node* two=twohead; 
    
    Node* temp=head;

    while(temp!=nullptr){
        if(temp->data==0){
            zero->next=temp;
            zero=temp;
        }
        else if(temp->data==1){
            one->next=temp;
            one=temp;
        }
        else{
            two->next=temp;
            two=temp;
        }
        temp=temp->next;

    }
    zero->next=(onehead->next)? onehead->next:twohead->next;
    one->next=(twohead->next);
    two->next=nullptr;

    Node* newhead=zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;

    return newhead;

    
}