#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n+1,0);
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v[x]++;
        }
        int count = 0;
        if(n>1){
            for(int i=1; i<=n; i++){
                count+=v[i]/2;
            }
        }
        cout << count << "\n";
    }
    return 0;
}