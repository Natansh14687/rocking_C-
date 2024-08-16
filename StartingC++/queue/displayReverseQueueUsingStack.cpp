#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int>& q){
    stack<int> st;
    while(q.size()!=0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()!=0){
        cout << st.top() << " ";
        q.push(st.top());
        st.pop();
    }
    cout << "\n";
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverseQueue(q);
    return 0;
}