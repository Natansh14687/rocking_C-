#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

Node* reverse(Node* head){
    Node* rh = NULL;
    while(head!=NULL){
        Node* temp = head;
        head = head->next;
        temp->next = rh;
        rh = temp;
    }
    return rh;
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
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
    Node *reverseHead = reverse(a);
    display(reverseHead);
    return 0;
}