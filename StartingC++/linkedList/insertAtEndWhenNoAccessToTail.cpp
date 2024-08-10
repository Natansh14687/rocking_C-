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
// ------------------------------------------------ Inserting by iteration when we have no access to tail ------------------------------------
void insertAtEnd(Node* head,int val){
    Node *t = new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = t;
}


int main(){
    Node* a = new Node(10);
    insertAtEnd(a,20);
    insertAtEnd(a,50);
    display(a);
    return 0;
}