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

class Stack{
public:
    Node* head;
    int size;

    Stack(){
        head = NULL;
        size = 0;
    }

    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    
    void pop(){
        if(head==NULL){
            cout << "stack underflow" << "\n";
            return;
        }
        head = head->next;
        size--;
    }

    int top(){
        return head->val;
    }

    void display(){
        Node* rh = NULL;
        Node* temp1 = head;
        while(temp1!=NULL){
            Node *temp2 = temp1;
            temp2->next = rh;
            rh = temp2;
            temp1 = temp1->next;
        }
        Node* temp2 = rh;
        while(temp2!=NULL){
            cout << temp2->val << " ";
            temp2 = temp2->next;
        }
        cout << "\n";
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    cout << st.size << "\n";
    st.display();
    return 0;
}