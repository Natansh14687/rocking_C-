#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& v) {
        vector<int> nums;
        int i = v.size()-1,j = v.size()-2;
        while(i>=0){
            // nums.push_back(v[i]);
            if(v[i]==v[j]) j--;
            else{
                nums.push_back(v[i]);
                i=j;
                j--;
                
            }
        }
        int k = nums.size();
        return k;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << removeDuplicates(v);
    return 0;
}