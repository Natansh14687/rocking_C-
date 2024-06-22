#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n,0);
    n = v.size()-1;
    for(int i=0; i<=n; i++){
        cin >> v[i];
    }
    int sum = 0;
    for(int i=0; i<=n; i++){
        sum+=v[i];
    }
    int arraySum = n*(n+1)/2;
    int duplicate = sum - arraySum;
    cout << duplicate;

    return 0;
}