#include <iostream>
#include <vector>
#include <list>
#include <queue>
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
    while(t1 != nullptr && t2 !=nullptr){
        if(t1->data < t2->data){
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
    if(t1) return temp->next=t1;
    if(t2) return temp->next=t2;

    return dnode->next;
}

Node* mergek(vector<Node*>  lists){
    priority_queue<pair<int, Node*>,
    vector<pair<int,Node*>> , greater<pair<int,Node*>>> pq;
    
    for(int i=0;i<lists.size();i++){
         if(lists[i] != nullptr){
        pq.push({lists[i]->data,lists[i]});

    }
}
    Node* dnode=new Node(-1);
    Node* temp=dnode;

    while(!pq.empty()){
        pair<int,Node*> p=pq.top();
        //pq.pop();
        temp->next=p.second;
        pq.pop();

        if(p.second->next){
            pq.push({p.second->next->data,p.second->next});
          //  temp=temp->next;
        }
        temp=temp->next;
    }
    return dnode->next;




}