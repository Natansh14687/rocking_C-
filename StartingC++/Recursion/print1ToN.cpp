#include<bits/stdc++.h>
using namespace std;
void print(int x, int n){
    if(x>n) return;
    cout << x << "\n";
    print(x+1,n);
}
int main(){
    int n;
    cin >> n;
    cout << "\n";
    print(1,n);
    return 0;
}