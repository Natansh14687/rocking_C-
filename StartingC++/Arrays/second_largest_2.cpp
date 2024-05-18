// Finding second largest value in given array without using array manipulation
#include<iostream>
using namespace std;
int main(){
    int array[8];
    int size = sizeof(array)/sizeof(array[0]);
    cout << "Enter the elements of the array : " << endl;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    int max=INT16_MIN, second_max=-1;
    for(int i=0; i<size; i++){
        if(max<array[i]) max = array[i];
    }
    for(int i=0; i<size; i++){
        if(second_max<array[i] && array[i]!=max) second_max = array[i];
    }
    cout << "The second maximum element in the array is : " << second_max << endl;
    return 0;
}