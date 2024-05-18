// Find the second largest element in the array...
// Array manipulation will be used...
#include<iostream>
using namespace std;

int max_element_index(int array[], int size){
    int max=INT16_MIN,max_index=-1;
    for(int i=0; i<size; i++){
        if(max<array[i]){
            max = array[i];
            max_index = i;
        }
    }
    return max_index;
}

int main(){
    int array[8],size=8;
    cout << "Enter the elements of array : " << endl;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    int max_index=max_element_index(array,size);
    for(int i=0; i<size; i++){
        array[max_index] = -1;
    }
    int second_max_index = max_element_index(array,size);
    cout << "The Second largest element in the array is : " << array[second_max_index] << endl;
    return 0;
}