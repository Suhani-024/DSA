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

int findlength(Node* slow, Node* fast){
    int cnt=1;
    fast=fast->next;

    while(slow != fast){
        cnt++;
        fast=fast->next;
    }
    return cnt;
}

int length(Node* head){
    Node* fast=head;
    Node* slow=head;

    while(fast != nullptr && fast->next != nullptr){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return findlength(fast,slow);
        }
    }
    return 0;
}