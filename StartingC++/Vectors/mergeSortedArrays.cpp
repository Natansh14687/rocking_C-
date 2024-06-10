// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>& v){
//     for(int i=0; i<v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << "\n";
// }

// void mergeSort(vector<int>& v, vector<int>& vrr, vector<int>& nums){
//     int i=0,j=0,k=0;
//     while(k<nums.size()){
//         if(i<v.size()-1 && v[i]<vrr[j]){
//             nums[k] = v[i];
//             i++;
//             k++;
//         }
//         else if(j>i){
//             nums.push_back(vrr[j]);
//             j++;
//         }
//         else if(vrr[j]<v[i]){
//             nums[k] = vrr[j];
//             j++;
//             k++;
//         }
//     }
    
// }

// int main(){
//     vector<int> v = {1,3,5,9};
//     vector<int> vrr = {2,4,7,10,12,14};
//     vector<int> nums(v.size()+vrr.size());
//      display(nums);
//     //mergeSort(v,vrr,nums);
//     display(nums);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void display(const vector<int>& v) {
    for (int val : v) {
        cout << val << " ";
    }
    cout << "\n";
}

void mergeSort(vector<int>& v, vector<int>& vrr, vector<int>& nums){
    int i=0,j=0,k=0;
    while(i<v.size() && j<vrr.size()){
        if(v[i]<vrr[j]){
            nums[k] = v[i];
            k++;
            i++;
        }
        else{
            nums[k] = vrr[j];
            j++;
            k++;
        }
    }  
    while(i<v.size()){
        nums[k]=v[i];
        k++;
        i++;
    }
    while(j<vrr.size()){
        nums[k] = vrr[j];
        k++;
        j++;
    }
}

// void mergeSort(const vector<int>& v, const vector<int>& vrr, vector<int>& nums) {
//     int i = 0, j = 0, k = 0;
//     int n = v.size(), m = vrr.size();

//     while (i < n && j < m) {
//         if (v[i] < vrr[j]) {
//             nums[k++] = v[i++];
//         } else {
//             nums[k++] = vrr[j++];
//         }
//     }
//     while (i < n) {
//         nums[k++] = v[i++];
//     }
//     while (j < m) {
//         nums[k++] = vrr[j++];
//     }
// }

int main() {
    vector<int> v = {1, 3, 5, 9};
    vector<int> vrr = {2, 4, 7, 10, 12, 14};
    vector<int> nums(v.size() + vrr.size());

    mergeSort(v, vrr, nums);
    display(nums);

    return 0;
}
