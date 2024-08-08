#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        // this->next = NULL;
    }
};

int main(){
    Node a(2);
    Node b(3);
    // a.val = 2;
    // Node b;
    // b.val = 3;
    // Node c;
    // c.val = 4;
    // Node d;
    // d.val = 5;

    // cout << c.val << "\n";

    // a.next = &b;
    // b.next = &c;
    // c.next = &d;
    // d.next = NULL;

    // cout << &c << "\n";
    // cout << b.next << "\n";
    // cout << c.next << "\n";
    
    cout << b.next << "\n";
    
    return 0;
}