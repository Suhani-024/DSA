#include <iostream>
using namespace std;

class Node{
public:
    string data;
    Node* next;
    Node* prev ;

    Node(string data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(string data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

class browser{
public:
Node* currpage;
browser(string homepage){
    currpage=new Node(homepage);
}

void visit(string url){
    Node* nnode=new Node(url);
    currpage->next=nnode;
    nnode->prev=currpage;
    currpage=nnode;
};

string back(int steps){
    while(steps){
        if(currpage->prev)
        currpage=currpage->prev;
        else 
           break; 
           steps--;

    }
    return currpage->data;
}

string forward(int steps){
    while(steps){
        if(currpage->next)
        currpage=currpage->next;
        else 
           break; 
           steps--;

    }
    return currpage->data;
}
};