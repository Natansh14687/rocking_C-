#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);

    a->next = b;
    b->next = c;
    c->next = d;

    Node *temp = a;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}