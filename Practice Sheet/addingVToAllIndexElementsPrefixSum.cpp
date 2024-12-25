#include<bits/stdc++.h>
using namespace std;

vector<long> vSum(vector<int>& arr, vector<vector<int>>& Qmat){
    int n = arr.size();
    
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n,0);

    int q;
    cin >> q;
    vector<vector<int>> Qmat(q, vector<int>(2));
    for(int i=0; i<q; i++){
        cin >> Qmat[i][0] >> Qmat[i][1];
    }

    vector<long> s = vSum(arr,Qmat);
    for(int i=0; i<s.size(); i++){
        cout << s[i] << " ";
    }
    return 0;
}