#include<bits/stdc++.h>
using namespace std;

void displayRevRec(stack<int>& st){
    if(st.size()==0) return;
    cout << st.top() << " ";
    int x = st.top();
    st.pop();
    displayRevRec(st);
    st.push(x);
}
void displayRec(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    displayRec(st);
    st.push(x);
    cout << st.top() << " ";
}

int main(){
     stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    displayRevRec(st);
    cout << " \n";
    displayRec(st);
    return 0;
}