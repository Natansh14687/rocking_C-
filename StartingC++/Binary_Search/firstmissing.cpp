#include<bits/stdc++.h>
using namespace std;
int firstMissing(vector<int>& v){
    int lo = 0, hi = v.size()-1;
    int ans;
    while(lo<=hi){
        int mid = lo+((hi-lo)/2);
        if(v[mid]==mid) lo = mid + 1;
        else if(v[mid]!=mid){
            hi = mid - 1;
            ans = mid;
        }
    }
    return ans;
}
int main(){
    vector<int> v = {0,1,3,4,6,7,8,9,11};
    cout << firstMissing(v);

    return 0;
}