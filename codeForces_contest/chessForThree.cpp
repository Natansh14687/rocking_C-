#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int p1,p2,p3;
        cin >> p1 >> p2 >> p3;
        if((p1+p2+p3)%2 != 0){
            cout << "-1" << "\n";
        }
        else if((p1+p2)>=p3) {
            cout << ((p1+p2+p3)/2) << "\n";
        }
        else cout << p1+p2;
    }
    return 0;
}