#include <iostream>
#include <vector>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;

    public:
    ListNode(int data1,ListNode* next1){
        data=data1;
        next=next1;
    }

    public:
    ListNode(int data1){
        data=data1;
        next=nullptr;
    }
};
int helper(ListNode* temp){
    if(temp == nullptr){
        return 1;
    }
    int carry=helper(temp->next);
    temp->data=temp->data + carry;
    if(temp->data < 10){
        return 0;
    }
    temp->data=0;
    return 1;

}

ListNode* carry(ListNode* head){
    int carry=helper(head);
    if(carry==1){
        ListNode* newnode=new ListNode(1);
        newnode->next=head;
        return newnode;
    }
    return head;
}