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

Node* findknode(Node* temp,int k){
    int cnt=1;
    while(temp != nullptr){
        if(cnt==k){
            return temp;
        }
        cnt++;
        temp=temp->next;
    }
    return temp;
}

Node* rotate(Node* head, int k){
     if(head == nullptr || head->next == nullptr || k == 0){
        return head;
    }
    int len=1;
    Node* tail=head;

    while(tail->next != nullptr) {
        len++;
        tail=tail->next;
    }
    if(k%len==0){
        return head;
    }
    k=k%len;
    tail->next=head;
    Node* lastnode=findknode(head,len-k);
        head=lastnode->next;
        lastnode->next=nullptr;
        return head;


    


}