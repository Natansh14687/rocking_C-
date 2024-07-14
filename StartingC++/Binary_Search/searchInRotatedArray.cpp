#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& v,int target){
    int lo = 0, hi = v.size()-1;
    int pivot = -1;
    while(lo<=hi){
        int mid = lo+((hi-lo)/2);
        if(v[mid]<v[mid-1] && v[mid]<v[mid+1]){
            pivot = mid;
            break;
        }
        else if(v[mid]>v[mid-1]&&v[mid]>v[mid+1]){
            pivot = mid + 1;
            break;
        }
        else if(v[mid]>v[hi]) lo = mid + 1;
        else if(v[mid]<v[hi]) hi = mid - 1;
    }
    if(target<=v[pivot-1] && target >= v[0]){
        lo = 0, hi = pivot-1;
        while(lo<=hi){
            int mid = lo+((hi-lo)/2);
            if(v[mid]==target) return mid;
            else if(v[mid]>target) hi = mid - 1;
            else if(v[mid]<target) lo = mid + 1;
        }
    }
    if(target>=v[pivot] && target <= v[hi]){
        int lo = pivot, hi = v.size()-1;
        while(lo<=hi){
            int mid = lo+((hi-lo)/2);
            if(v[mid]==target) return mid;
            else if(v[mid]>target) hi = mid - 1;
            else if(v[mid]<target) lo = mid + 1;
        }
    }
    return -1;
}
int main(){
    vector<int> v = {0};
    cout << search(v,0);
    return 0;
}