// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin >> n >> k;
//     if(k>n){
//         cout << k;
//     }
//     int i = k;
//     while(i>n){
//         if(i>n){
//             cout << i;
//             break;
//         }
//         else{
//             i+=7;
//         }
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    if (k > n) {
        cout << k << endl;
    } else {
        int i = k;
        while (true) {
            if (i > n) {
                cout << i << endl;
                break;
            } else {
                i += k;
            }
        }
    }
    
    return 0;
}
