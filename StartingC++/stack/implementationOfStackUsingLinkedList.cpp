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

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

    void insertAtEnd(int val){
        Node *temp = new Node(val);
        Node* t = head;
        while(t!=NULL){
            t=t->next;
        }
        t->next = temp;
        tail = temp;
    }

    void deleteNodeAtEnd(){
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        tail = temp;
        temp->next = NULL;
    }
    
    int sizee(){
        Node* temp = head;
        int n = 0;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        return n;
    }
};

class Stack{
public:
    LinkedList ll;
    
    Stack(){

    }

    void push(int val){
        ll.insertAtEnd(val);
    }
    void pop(){
        ll.deleteNodeAtEnd();
    }
    int top(){
        cout << ll.tail->val << "\n";
    }
    int size(){
        ll.sizee();
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
    cout << st.size();
    return 0;
}