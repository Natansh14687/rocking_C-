#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    vector<int> vrr(v.size());
    for(int i=0; i<vrr.size(); i++){
        vrr[i] = v[v.size()-1-i];
        // vrr.push_back(v[v.size()-1-i]);  --> increasing the size of the array
    }

    for(int i=0; i<vrr.size(); i++){
        cout << vrr[i] << " ";
    }
    return 0;
}