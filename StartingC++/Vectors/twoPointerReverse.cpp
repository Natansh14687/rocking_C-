#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int i=0, j=v.size()-1;
    while(j>=i){
        v[i] = v[i] + v[j];
        v[j] = v[i] - v[j];
        v[i] = v[i] - v[j];
        i++;
        j--;
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}