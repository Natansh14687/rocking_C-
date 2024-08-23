#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int temp = v[k-1];
    int count = 0;
    for(int i=0; i<n; i++){
        if(v[0]!=0&&v[i]!=0&&v[i]>=temp) count++;
    }
    cout << count;
    return 0;
}