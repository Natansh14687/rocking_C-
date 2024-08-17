#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8] = {3,1,2,5,4,6,2,3};
    int ans[8];
    int n = sizeof(arr)/sizeof(arr[1]);
    fill(ans,ans+n,-1);
    for(int i=0; i<sizeof(arr)/sizeof(arr[1]); i++){
        for(int j=i+1; j<sizeof(arr)/sizeof(arr[1]); j++){
            if(arr[j]>arr[i]){
                ans[i] = arr[j];
                break;
            }
        }
    }
    for(int i=0; i<sizeof(arr)/sizeof(arr[1]); i++){
            cout << ans[i] << " ";
        }
    return 0;
}

