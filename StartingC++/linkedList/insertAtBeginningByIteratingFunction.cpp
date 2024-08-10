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

void display(Node *head){
    while(head!=NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
}

void insertAtBeginning(int val, Node* head){
    Node *t = new Node(val);
    t->next = head;
    head = t;
}

int main(){
    Node *a = new Node(10);
    insertAtBeginning(20,a);
    display(a);
    insertAtBeginning(30,a);
    display(a);

    return 0;
}

// ----------------------------------------------------------- not working --------------------------------------------------------