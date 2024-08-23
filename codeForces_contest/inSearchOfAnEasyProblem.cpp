// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cin >> n;
//     while(n--){
//         int t;
//         cin >> t;
//         sum+=t;
//     }
//     if(sum==0) cout << "EASY";
//     else cout << "HARD";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     while(n--){
//         int resp;
//         cin >> resp;
//         if(resp==1){
//             cout << "HARD";
//             return 0;
//         }
//     }
//     cout << "EASY";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool flag = true;
    while(n--){
        int resp;
        cin >> resp;
        if(resp==1){
            cout << "HARD";
            flag = false;
        }
    }
    if(flag==true) cout << "EASY";
    return 0;
}