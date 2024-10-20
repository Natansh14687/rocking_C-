#include<bits/stdc++.h>
using namespace std;

// class Stack{
// public:
//     int arr[5];
//     int idx;
//     Stack(){
//         idx = -1;
//     }
//     void push(int val){
//         if(idx == 4){
//             cout<<"Stack is full"<<"\n"; // Stack Overflow
//             return;
//         }
//         idx++;
//         arr[idx] = val;
//     }
//     void pop(){
//         if(idx == -1){
//             cout << "Stack is Empty" << "\n";
//             return;
//         }
//         idx--;
//     }
//     int top(){
//         return arr[idx];
//     }
//     int size(){
//         return idx+1;
//     }
//     void display(){
//         for(int i=0; i<=idx; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout << "\n";
//     }
// };

// int main(){
//     Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     cout << st.size() << "\n";
//     st.pop();
//     cout << st.top() << "\n";
//     st.display();
//     st.push(60);
//     st.display();
//     st.push(70);

//     return 0;
// }

// Stack of vector --------------> so simple (farzi)

class Stack{
public:
    vector<int> arr;
    void push(int val){
        arr.push_back(val);
    }
    void pop(){
        if(arr.size()==0){
            cout << "Stack is empty";
            return;
        }
        arr.pop_back();
    }
    int top(){
        return arr[arr.size()-1];
    }
    int size(){
        return arr.size();
    }
    void display(){
        for(int  i=0; i<arr.size(); i++){
            cout << arr[i] << " ";
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
    cout << st.size() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.display();
    st.push(60);
    st.display();
    // st.push(70);

    return 0;
}