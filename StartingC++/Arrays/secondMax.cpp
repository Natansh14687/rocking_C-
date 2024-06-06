#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int max = INT_MIN, secondMax = INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i]) max = arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i] != max and secondMax<arr[i]) secondMax = arr[i];
    }
    cout << secondMax;
    return 0;
}
