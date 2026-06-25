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

Node* add(Node* h1,Node* h2){
    Node* t1=h1;
    Node* t2=h2;

    Node* dnode=new Node(-1);
    Node* curr=dnode;
    int carry=0;
    int sum=0;

    while(t1 != nullptr || t2 != nullptr){
        sum=carry;
        if(t1){
            sum=sum+t1->data;

        }
        if(t2){
            sum=sum+t2->data;
        }
        Node* newNode=new Node(sum%10);
        carry=sum/10;
        curr->next=newNode;
        curr=curr->next;

        if(t1){
            t1=t1->next;

        }
        if(t2){
            t2=t2->next;

        }
       

    }
     if(carry){
            Node* newNode=new Node(carry);
            curr->next=newNode;
        }
    return dnode->next;
}

int main(){
    return 0;
}
