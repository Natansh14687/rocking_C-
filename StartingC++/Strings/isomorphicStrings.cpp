#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    vector<int> v(150,1000);
    if(s.length()!=t.length()) cout << "false";
    for(int i=0; i<s.length(); i++){
        int idx = int(s[i]);
        if(v[idx]==1000) v[idx] = s[i]-t[i];
        else if(v[idx]!=(s[i]-t[i])) cout << "false";
        else cout << "true";
    }
    for(int i=0; i<v.size(); i++) v[i]=1000;
    for(int i=0; i<t.length(); i++){
        int idx = int(t[i]);
        if(v[idx]==1000) v[idx] = t[i] - s[i];
        else if(v[idx]!=(t[i]-s[i])) cout << "false";
        else cout << "true";
    }
    return 0;
}