#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    int arr[5];
    int b;
    int f;

    Queue(){
        b = 0;
        f = 0;
    }

    void push(int val){
        if(b>sizeof(arr)/sizeof(arr[0])){
            cout << "queue Overflow" << "\n";
            return;
        }
        arr[b] = val;
        b++;
    }

    int size(){
        return b-f;
    }

    void pop(){
        f++;
    }

    int front(){
        return arr[f];
    }

    int back(){
        return arr[b-1];
    }

    void display(){
        for(int i=f; i<b; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    bool empty(){
        if(b-f==0) return true;
        else return false;
    }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << q.front() << "\n";
    cout << q.back() << "\n";
    q.pop();
     cout << q.front() << "\n";
    cout << q.size() << "\n";
    cout << q.empty() << "\n";
    q.display();
    return 0;
}