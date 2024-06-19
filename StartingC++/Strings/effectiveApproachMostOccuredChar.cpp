#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<int> v(26,0);
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int ascii = int(ch);
        v[ascii-97]++; 
    }
    int max = 0; 
    for(int i=0; i<26; i++){
        if(max<v[i]) max = v[i];
    }
    for(int i=0; i<26; i++){
        if(v[i]==max){
        char ch = char(i+97);
        cout << ch << " " << max << "\n";
        }
    }
    return 0;
}