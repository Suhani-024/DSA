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

Node* arrtoll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev= head;
    for(int i=1;i<arr.size()-1;i++){
        Node* temp=new Node(arr[i],NULL,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

int main(){
    return 0;
}