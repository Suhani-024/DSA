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

Node* deletehead(Node* head){

    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;

}

Node* deletetail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}

Node* deletek(Node* head,int k){

    if(head==NULL) return head;
    if(k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }


    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;

    while(temp!=NULL){
        cnt++;
    
    if(cnt==k){
        prev->next=prev->next->next;
        delete temp;
        break;
    }
    prev=temp;
    temp=temp->next;


    //return head;
}
return head;
}

  

int main(){
    return 0 ;
}