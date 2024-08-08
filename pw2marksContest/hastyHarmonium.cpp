#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string temp;
    if(s.length()==2){
        cout << s;
    }
    else{
        for(int i=1; i<s.length()-1; i++){
            if(int(s[i])+int(s[i-1]) < int(s[i])+int(s[i+1])){
                temp = s[i]+s[i-1];
            }
            else{
                temp = s[i]+s[i+1];
            }
        
        }

    }
    return 0;
}