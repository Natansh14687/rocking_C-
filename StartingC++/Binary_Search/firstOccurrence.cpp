#include<bits/stdc++.h>
using namespace std;
int firstOccur(vector<int>& v,int target){
    int lo = 0, hi = v.size()-1;
    if(v.size()==1) return v[0]; 
    while(lo<=hi){
        int mid = lo+((hi-lo)/2);
        if(v[mid]==target){
            if(mid>0&&v[mid-1]<target) return mid;
            else hi = mid - 1;
        }
        else if(target>v[mid]) lo = mid + 1;
        else if(target<v[mid]) hi = mid - 1;
    }
}
int main(){
    vector<int> v = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    cout << firstOccur(v,3);
    return 0;
}