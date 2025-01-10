#include<bits/stdc++.h>
using namespace std;

vector<long> sumEven(vector<int>& arr, vector<vector<int>>& Qmat){
    int n = arr.size(), sum = 0;
    vector<long> pSum(n);
    for(int i=0; i<n; i++){
        if(arr[i]%2==0) sum += arr[i];
        else{
        sum += 0;
        }
        pSum[i] = sum;
    }
    int q = Qmat.size();
    vector<long> ans(q);
    for(int i=0; i<q; i++){
        int s = Qmat[i][0], e = Qmat[i][1];
        if(s == 0){
            ans[i] = pSum[e];
        }else{
            ans[i] = pSum[e] - pSum[s-1];
        }
    }
    return ans;
}

int main(){
    int n,q;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
    cin >> q;
    vector<vector<int>> Qmat(q, vector<int>(2));
    for(int i=0; i<q; i++){
        int s,e;
        cin >> s >> e;
        Qmat[i][0] = s;
        Qmat[i][1] = e;
    }
    vector<long> v = sumEven(arr, Qmat);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}