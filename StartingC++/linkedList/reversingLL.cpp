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

void reverse(Node *head){
    if(head == NULL) return;
    reverse(head->next);
    cout << head->val << " ";
}

int main(){
    Node* a = new Node(100);
    Node* b = new Node(200);
    Node *c = new Node(300);
    Node *d = new Node(400);
    Node* e = new Node(500);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    reverse(a);
    return 0;
}