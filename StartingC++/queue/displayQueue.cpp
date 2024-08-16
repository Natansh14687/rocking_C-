#include<bits/stdc++.h>
using namespace std;

void display(queue<int>& q){
    int x = q.size();
    while(x--){
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
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
    display(q);
    return 0;
}