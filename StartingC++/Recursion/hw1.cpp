#include<bits/stdc++.h>
using namespace std;

void greet(int n){
    if(n==0) return;
    cout << "Good Morning" << "\n";
    greet(n-1);
}

int main(){
    int n;
    cin >> n;
    greet(n);
    return 0;
}