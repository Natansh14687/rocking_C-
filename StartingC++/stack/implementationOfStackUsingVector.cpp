#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    vector<int> v;
    int idx;

    Stack(){
        this->idx = -1;
    }

    void push(int val){
        idx++;
        v.push_back(val);
    }
    void pop(){
        if(idx<0){
            cout << "Stack underflow error" << "\n";
            return;
        }
        v.pop_back();
        idx--;
    }
    int top(){
        return v[idx];
    }
    int size(){
        return v.size();
    }
};

int main(){
    Stack st;
    st.pop();
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