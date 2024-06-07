#include<bits/stdc++.h>
using namespace std;

void iterate(int *a){
    for(int i=0; i<6; i++){
        cout << a[i] << " ";
    }
    return;
}

int main(){
    int arr[] = {1,4,6,8,9,4};
    int* ptr = &arr[0];
    *ptr = 8;
    // cout << *ptr;
    for(int i=0; i<6; i++){
        cout << *ptr << " ";
        ptr++;
    }
    cout << "\n";
    ptr = arr;
    
    *ptr = 100;
    ptr++;
    *ptr = 99;
    ptr--;

    for(int i=0; i<6; i++){
        cout << i[ptr] << " ";
    }

    cout << "\n";

    iterate(arr);
    return 0;
}