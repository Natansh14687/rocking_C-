#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int size(Node *head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

int main(){
    Node* a = new Node(100);
    Node *b = new Node(200);
    Node *c = new Node(300);
    Node *d = new Node(400);
    Node *e = new Node(500);
    Node *f = new Node(600);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next  = e;
    e->next = f;

    display(a);
    cout << size(a);
    return 0;
}