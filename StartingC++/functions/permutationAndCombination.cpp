#include<bits/stdc++.h>
using namespace std;
int fact(int x){
    int prod = 1;
    for(int i=1; i<=x; i++){
        prod*=i;
    }
    return prod;
}
int combination(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int permutation(int n, int r){
    return fact(n)/fact(n-r);
}
int main(){
    int n;
    cin >> n;
    int r;
    cin >> r;
    int ncr = combination(n,r);
    int npr = permutation(n,r);
    cout << ncr << " " << npr; 
    return 0;
}