#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count = 0;
    for(int i=1; i<s.length(); i++){
        if(s.length()==1) break;
        else if(s.length()==2 && s[0]!=s[1]){
            count = 1;
            break;
        }
        else if(i==0){
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==s.length()-1){
            if(s[i]!=s[i-1]) count++;
        }
        else if(s[i]!=s[i-1] && s[i]!=s[i+1]) count++;
    }
    cout << count;
    return 0;
}