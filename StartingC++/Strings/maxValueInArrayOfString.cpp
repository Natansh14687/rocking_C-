#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v(n);
    int max = INT16_MIN;
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }
    for(int i=0; i<v.size(); i++){
        int x = stoi(v[i]);
        if(max<x) max = x;
    }
    cout << max;
    return 0;
}