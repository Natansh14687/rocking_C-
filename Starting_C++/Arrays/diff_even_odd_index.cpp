// Find the difference b/w the sum of elements at even indices to the sum of elements at odd indices.
#include<iostream>
using namespace std;

int main() {
    int array[8];
    cout << "Enter the elements of array : " << endl;
    int size =sizeof(array)/sizeof(array[0]);
    for (int i=0; i<size; i++){
        cin >> array[i];
    }
    int sum_even=0, sum_odd=0;
    for(int i=0; i<size; i++){
        if ((i+1)%2==0) sum_even+=array[i];
        else sum_odd+=array[i];
    }
    int difference = sum_even - sum_odd;
    cout << "The difference b/w elements of even indices and odd indices of array is : " << difference << endl;
    return 0;
}