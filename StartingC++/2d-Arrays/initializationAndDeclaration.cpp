#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int aray[2][3] = {1,2,3,4,5,6};
    cout << arr[1][0] << "\n";
    cout << aray[1][0] << "\n";
    // int a[2][] = {1,2,3,4,5,6};    -> should not be done
    int b[][3] = {1,2,3,4,5,6};   //  -> this is also ony valid for initialization.
    // cout << a[1][0] << "\n";
    cout << b[1][0] << "\n";
    int a[2][3];
    // int ai[2][];   -> these both are not valid for declaration.
    // int aii[][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << aray[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}