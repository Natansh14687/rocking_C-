#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==1||n==0) return 1;
    int res = n * factorial(n-1);
    return res;
}
int main(){
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}