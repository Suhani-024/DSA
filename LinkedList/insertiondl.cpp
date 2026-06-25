#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* inserthead(Node* head,int val){

    Node* newhead=new Node(val,head,nullptr);
    head->back=newhead;
    return newhead;

}
Node* inserttail(Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* tail=head;
    while(tail->next != NULL){
        tail=tail->next;
    
    }
     Node* prev=tail->back;

    Node* newNode=new Node(val,tail,prev);
    prev->next=newNode;
    tail->back=newNode;
    return head;
}

Node* insertk(Node* head,int val,int k){
    if(head==NULL){
        return new Node(val);
    }
    if(k==1){
        Node* newhead=new Node(val,head,nullptr);
    head->back=newhead;
    return newhead;

    }
    int cnt=1;
    Node* temp=head;

    while(temp!=NULL){
        temp=temp->next;
        cnt++;}

        if(temp==NULL){
             return inserttail(head,val);
        }
    
    Node* prev=temp->back;
    Node* newNode=new Node(val,temp,prev);

    prev->next=newNode;
    temp->back=newNode;
    return head;
    
}

int main(){
    return 0;
}