#include <iostream>
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

Node* reverse(Node* head){
    if(head == nullptr || head->next == nullptr)
        return head;

    Node* prev = nullptr;
    Node* current = head;

    while(current != nullptr){
        prev = current->back;
        current->back = current->next;
        current->next = prev;
        current = current->back;
    }

    return prev->back;
}
int main(){
    return 0;
}