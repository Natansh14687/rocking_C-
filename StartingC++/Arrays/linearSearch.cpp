#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    bool result;
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            result = true;
            break;
        }
        else result = false;
    }
    if(result == true) cout << x << " is present in the array";
    else cout << x << " is not present in the array";
    return 0;
}