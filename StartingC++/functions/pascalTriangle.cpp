#include<bits/stdc++.h>
using namespace std;
int fact(int x){
    int product = 1;
    for(int i=1; i<=x; i++){
        product*=i;
    }
    return product;
}
int combination(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout << combination(i,j) << " ";
        }
        cout << "\n";
    }
    return 0;
}