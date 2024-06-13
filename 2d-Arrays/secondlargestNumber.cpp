#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n][m];
    int max = INT16_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    int smax = INT16_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(smax<arr[i][j] && arr[i][j]!=max) smax = arr[i][j];
        }
    }
    
    cout << smax;

    return 0;
}