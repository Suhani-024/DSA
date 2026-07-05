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

Node* merge(Node* head1,Node* head2){
    Node* t1=head1;
    Node* t2=head2;
    Node* dnode=new Node(-1);
    Node* temp=dnode;

    while(t1 !=nullptr  && t2!=nullptr){
         if(t1->data <t2->data){
            temp->next=t1;
            temp=t1;
            t1=t1->next;
         }
         else{
            temp->next=t2;
            temp=t2;
            t2=t2->next;

         }
        
    }
    if(t1)  temp->next=t1;
     if(t2)  temp->next=t2;

     return dnode->next;


}

Node* middle(Node* head){
    Node* slow=head;
    Node* fast=head->next;

    while(fast !=nullptr && fast->next !=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node* sortll(Node* head){
    if(head == nullptr || head->next==nullptr){
        return head;
    }
    Node* mid=middle(head);
    Node* lhead=head;
    Node* rhead=mid->next;
    mid->next=nullptr;

    lhead=sortll(lhead);
    rhead=sortll(rhead);

    return merge(lhead,rhead);

}