#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int arr[5];
    int idx;

    Stack(){
        this->idx = -1;
    }
    void push(int val){
        if(idx==5){
            cout << "Stack is full";
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size(){
        return idx+1;
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