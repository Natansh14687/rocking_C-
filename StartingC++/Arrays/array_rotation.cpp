// Rotate the array by "k" steps where k is non-negative. Note k can be greater than n as well where n is the size of array...
// Using extra array...
#include<iostream>
using namespace std;
int main() {
    int array[5];
    int size = sizeof(array)/sizeof(array[0]);
    cout << "Enter the elements of the array : " << endl;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    int k,a[size],j=0;
    cout << "Enter how many time you want to rotate the array : " << endl;
    cin >> k;
    k=k%size;
    for(int i=size-k; i<size; i++){
        a[j++]=array[i];
    }
    for(int i=0; i<size; i++){
        a[j++]=array[i];
    }
    for(int i=0; i<size; i++){
        cout << a[i];
    }
    return 0;
}