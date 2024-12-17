#include<bits/stdc++.h>
using namespace std;

vector<long> sumEven(vector<int>& arr, vector<vector<int>>& Qmat){
    int n = arr.size();
    vector<long> pSum(n);
    long sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0) sum+=arr[i];
        pSum[i] = sum;
    }
    int q = Qmat.size();
    vector<long> v(q);
    for(int i=0; i<q; i++){
        int s = Qmat[i][0], e = Qmat[i][1];
        if(s == 0){
            v[i] = pSum[e];
        }else{
            v[i] = pSum[e] - pSum[s];
        }
    }
    return v;
    
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
    int q;
    cin >> q;
    vector<vector<int>> Qmat(q,vector<int>(2));
    for(int i=0; i<q; i++){
        cin >> Qmat[i][0] >> Qmat[i][1];
    }

    vector<long> s = sumEven(arr,Qmat);
    for(int i=0; i<s.size(); i++){
        cout << s[i] << " ";
    }
    return 0;
}