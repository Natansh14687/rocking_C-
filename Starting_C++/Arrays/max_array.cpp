// Find the maximum value out of all the elements in the array...
#include<iostream>
using namespace std;

int main() {
    int array[5];
    int size = sizeof(array)/sizeof(array[0]);
    for (int i=0; i<size; i++){
        cin >> array[i];
    }
    int max=0;
    for (int i=0; i<size; i++){
        if(max<array[i]) max = array[i];
    }
    cout << max;
    return 0;
}