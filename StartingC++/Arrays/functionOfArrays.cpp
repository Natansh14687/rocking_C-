#include<bits/stdc++.h>
using namespace std;

void iterate(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void initialize(int arr[]){
    arr[2] = 100;
}

int main(){
    int arr[] = {1,3,5,7,4,2,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    iterate(arr,size);
    cout << "\n";
    initialize(arr);
    iterate(arr,size);
    return 0;
}