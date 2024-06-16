#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int product = 1;
    for(int i=n; i>=1; i--){
        product*=i;
    }
    return product;
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int k=i; k<n; k++){
            cout << " ";
        }
        for(int j=0; j<i+1; j++){
            cout << factorial(i)/(factorial(j)*factorial(i-j)) << " ";
        }
        cout << "\n";
    }
    return 0;
}