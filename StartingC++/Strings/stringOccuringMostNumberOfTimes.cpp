#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    int max = 0;
    while(ss>>temp){
        v.push_back(temp);
    }
   
    for(int i=0; i<v.size(); i++){
        string s = v[i];
        int count = 1;
        for(int j=i+1; j<v.size(); j++){
            if(v[j] == s) count++;
        }
        if(max<count) max = count;
    }
    for(int i=0; i<v.size(); i++){
        string s = v[i];
        int count = 1;
        for(int j=i+1; j<v.size(); j++){
            if(v[j]==s) count++;
        }
        if(max == count) cout << s << " " << max << "\n";
    }
    return 0;
}