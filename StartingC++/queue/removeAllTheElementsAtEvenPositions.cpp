#include<bits/stdc++.h>
using namespace std;

void displayOddPositionedElements(queue<int>& q){
    for(int i=0; i<q.size(); i++){
        if(i%2!=0){
            cout << q.front() << " ";
            q.push(q.front());
            q.pop();
        }else{
            q.push(q.front());
            q.pop();
        }
    }
    cout << "\n";
}

void removeEvenPositionedElements(queue<int>& q){
    int n = q.size();
    for(int i=0; i<n; i++){
        if(i%2==0){
            q.pop();
        }else{
            q.push(q.front());
            q.pop();
        }
    }
}

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
    // displayOddPositionedElements(q);
    display(q);
    removeEvenPositionedElements(q);
    display(q);
    // displayOddPositionedElements(q);
    return 0;
}