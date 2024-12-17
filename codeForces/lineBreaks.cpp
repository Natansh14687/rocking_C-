#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<string> v(n);
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            v[i] = s;
        }

        int count = 0;
        string h = "";
        for(int i=0; i<n; i++){
            h += v[i];
            if(h.length() <= m) count++;
            else break;

        }
        cout << count;
    }
    return 0;
}