#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *deletehead(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

Node* deletetail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;

    prev->next = nullptr;
    tail->back = NULL;
    delete tail;
    return head;
}

Node *deletek(Node *head, int k)
{

    if (head == NULL)
        return head;

    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;

        if (cnt == k)
        {

            break;
            
        }
         temp = temp->next;
    }

        Node *prev = temp->back;
        Node *front = temp->next;

        if (front == nullptr && prev == nullptr)
        {
            delete temp;
        }
        if (front == nullptr){
           head= deletetail(head);

        }
        if(prev==nullptr){
           head= deletehead(head);
        }
        prev->next=front;
        front->back=prev;
        temp->next=nullptr;
        temp->back=nullptr;


        delete temp;

        
        
        

        
    
    return head;
}

int main()
{
    return 0;
}