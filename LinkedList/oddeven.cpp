#include <iostream>
#include <vector>
using namespace std;


class Node{
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* oddeven(Node* head){

     if(head==nullptr || head->next==nullptr)
        return head;

    Node* odd=head;
    Node* even=head->next;
    Node* evenhead=head->next;

    while(even != nullptr && even->next !=nullptr ){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;
    }
    odd->next=evenhead;
    return head;
}

int main(){
    return 0;
}