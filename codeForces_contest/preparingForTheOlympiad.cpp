#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v[i] = x;
        }
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            arr[i] = x;
        }
        
        int sum = v[n-1];
        if(n>1){
            for(int i=n-2; i>=0; i--){
                if(v[i]>arr[i+1]) sum+=(v[i]-arr[i+1]);
            }
            cout << sum << "\n";

        }else{
            cout << v[0] << "\n";
        }
    }
    return 0;
}