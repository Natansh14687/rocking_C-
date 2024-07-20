#include<bits/stdc++.h>
using namespace std;
vector<int> findClosestElements(vector<int>& v, int k, int x){
    vector<int> nums(k);
    if(x<v[0]){
        for(int i=0; i<k; i++){
            nums[i] = v[i];
        }
    }
    if(x>=v[v.size()-1]){
        for(int i=v.size()-1; i>v.size()-1-k; i--){
            nums.push_back(v[i]);
        }
    }
    bool flag = false;
    int idx = -1;
    int lo = 0, hi = v.size()-1;
    while(lo<=hi){
        int mid = lo+((hi-lo)/2);
        if(v[mid]==x){
            flag = true;
            idx = mid;
            break;
        }
        else if(x>v[mid]) lo = mid + 1;
        else if(x<v[mid]) hi = mid - 1;
    }
    if(flag==true){
        for(int i=0; i<k; i++){
            int lb = idx-i, ub = idx + i;
            if(abs(x-lb)<=abs(x-ub)) nums.push_back(v[lb]);
            else if(abs(x-lb)>abs(x-ub)) nums.push_back(v[ub]);

        }
    }
    return nums;
}
int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> ans = findClosestElements(v,4,5);
    for(int i=0; i<ans.size()-1; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}