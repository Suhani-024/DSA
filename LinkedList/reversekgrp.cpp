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

Node* getknode(Node* temp, int k){
    k--;
    while(temp != nullptr && k>0){
        
        temp=temp->next;
        k--;
    }
    return temp;
}
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

Node* reverkgrp(Node* head,int k){
    Node* temp=head;
    Node* prevnode=nullptr;

    while(temp != nullptr){
        Node* knode=getknode(temp,k);

        if(knode==nullptr){
            if(prevnode)  prevnode->next=temp;
            break;
        }
       Node* nextnode=knode->next;
        knode->next=nullptr;
        reverse(temp);

        if(temp==head){
            head=knode;
        }
        else{
            prevnode->next=knode;
        }
        prevnode=temp;
        temp=nextnode;
    }
    return head;
}