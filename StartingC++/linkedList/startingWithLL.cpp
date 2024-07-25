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
    // Node a;
    // a.val = 1;
    // Node b;
    // b.val = 2;
    // Node c;
    // c.val = 3;
    // Node d;
    // d.val = 4;

    Node a(1);
    Node b(2);
    Node c(3);
    Node d(4);

    cout << a.val <<"\n";
    cout << &a << "\n";
    cout << a.next << "\n";
    cout << b.next << "\n";


    a.next = &b;
    b.next = &c;
    c.next = &d;
    // d.next = NULL;

    cout << a.next->val << "\n";

    b.next->val = 100;
    cout << c.val << "\n";


    cout << a.next->next->next->val << "\n";

    Node temp = a;
    while(1){
        cout << temp.val << " ";
        if(temp.next==NULL){break;}
        temp = *(temp.next);
    }
    return 0;
}