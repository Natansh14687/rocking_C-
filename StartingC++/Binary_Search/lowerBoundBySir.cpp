#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>& v,int target){
    int lo = 0, hi = v.size()-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+((hi-lo)/2);
        if(v[mid]==target){
            return mid-1;
            flag = true;
        }
        else if(v[mid]<target) lo = mid + 1;
        else if(v[mid]>target) hi = mid - 1;
    }
    if(flag == false) return hi;
}
int main(){
    vector<int> v = {1,2,4,5,9,15,18,21,24,27};
    cout << lowerBound(v,20);
    return 0;
}