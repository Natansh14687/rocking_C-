#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    if(v.size()==1) cout << v[0];
    string s = "";
    string first = v[0];
    string last = v[v.size()-1];
    for(int i=0; i<min(first.length(),last.length()); i++){
        if(first[i] == last[i]) s+=first[i];
        // else cout << s;
    }
    cout << s;
    
}