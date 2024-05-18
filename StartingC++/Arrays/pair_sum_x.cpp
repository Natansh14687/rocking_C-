// Find the total number of pairs in the array whose sum is equal to the given value x.
#include<iostream>
using namespace std;

int main(){
    int array[8];
    cout << "Enter the elements of the array : " << endl;
    int size = sizeof(array)/sizeof(array[0]);
    for (int i=0; i<size; i++){
        cin >> array[i];
    }
    int x,pairs=0;
    cout << "Enter the value of x : " << endl;
    cin >> x;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[i]+array[j] == x) pairs++;
        }
    }
    cout << pairs << endl;
    return 0;
}