#include<bits/stdc++.h>
using namespace std;

void displayIterative(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout << "\n";
}


void displayRecursive(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    displayRecursive(st);
    cout << x << " ";
    st.push(x);
}

void pushAtBottom(stack<int>& st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}

void insertAtIdxIterative(stack<int>& st, int idx, int val){
    stack<int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void insertAtIdxRecursive(stack<int>& st, int idx, int val){
    if(st.size()==idx){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    insertAtIdxRecursive(st,idx,val);
    st.push(x);
}

void reverseStack(stack<int>& st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st,x);
}

int main(){
    stack<int> st;
    cout << st.size() << "\n";
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.size() << "\n";
    displayIterative(st);
    displayRecursive(st);
    // cout << "\n";
    // reverseStack(st);
    // displayRecursive(st);
    cout << "\n";
    insertAtIdxIterative(st,2,110);
    displayRecursive(st);
    cout <<  "\n";
    insertAtIdxRecursive(st, 2, 1000);
    displayRecursive(st);

    return 0;
}