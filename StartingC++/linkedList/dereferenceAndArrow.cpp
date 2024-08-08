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

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    cout << d.val << "\n\n";

    (*(*(*(a.next)).next).next).val = 100;
    
    cout << d.val << "\n\n";

    a.next->next->next->val = 40;

    cout << d.val << "\n\n";

// ------------------------------------------------ Printing elements of LL using loops--------------------------------------

    Node temp = a;
    while(temp.next!=NULL){
        cout << temp.val << " ";
        temp = *(temp.next);
    }
    cout << "\n\n";

    temp = a;

    while(true){
        cout << temp.val << " ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
    return 0;
}