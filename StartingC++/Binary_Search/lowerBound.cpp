#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>& v, int target){
    int lo = 0, hi = v.size()-1;
    if(target<=v[0]) return -1;
    if(target>=v[hi]) return hi;
    while(lo<=hi){
        int mid = lo+((hi-lo)/2);
        if(v[mid+1]>target && v[mid-1]<target && v[mid]<target) return mid;
        else if(v[mid] == target) return mid-1;
        else if(target>v[mid]) lo = mid + 1;
        else if(target<v[mid]) hi = mid - 1;
    }
    return -1;
}
int main(){
    vector<int> v = {1,2,4,5,9,15,18,21,24,27};
    cout << lowerBound(v,20);
    return 0;
}