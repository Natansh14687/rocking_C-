#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream str(s);
    string temp;
    vector<string> v;
    int count = 1, maxCount = 0;
    while(str>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i=1; i<v.size(); i++){
        if(v[i] == v[i-1]) count++;
        else count = 1;
        maxCount = max(maxCount,count);
    }
    for(int i=1; i<v.size(); i++){
        if(v[i] == v[i-1]) count++;
        else count = 1;
        if(maxCount == count) {
            cout << v[i] << " " << maxCount << "\n";
        }
    }
    return 0;
}