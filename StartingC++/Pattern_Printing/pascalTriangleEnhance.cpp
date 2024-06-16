#include<bits/stdc++.h>
using namespace std;
// int factorial(int n){
//     int product = 1;
//     for(int i=n; i>=1; i--){
//         product*=i;
//     }
//     return product;
// }
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            cout << " ";
        }
        int current = 1;
        for(int j=0; j<=i; j++){
            cout << current << " ";
            current = current*(i-j)/(j+1);
        }
        cout << "\n";
    }
    return 0;
}