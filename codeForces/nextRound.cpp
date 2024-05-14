#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n];
    int num;
    cin >> num;
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    int count=0; 
    for(int i=0; i<n; i++){
        if(array[i]>num) count++;
    }
    cout << count;
    return 0;
}