// Find the third largest element in the array...
// Concept = array manipulation
#include<iostream>
using namespace std;

int max_element_index(int array[], int size){
    int max = INT8_MIN, max_index = -1;
    for(int i=0; i<size; i++){
        if(max<array[i]){
            max = array[i];
            max_index = i;
        }
    }
    return max_index;
}

int main() {
    int array[8];
    int size = sizeof(array)/sizeof(array[0]);
    cout << "Enter the elements of array" << endl;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    int max_index = max_element_index(array,size);
    for(int i=0; i<size; i++){
        array[max_index] = -2;
    }
    int second_max_index = max_element_index(array,size);
    for(int i=0; i<size; i++){
        array[second_max_index] = -1;
    }
    int third_max_index = max_element_index(array, size);
    cout << "The largest element in the array is : " << array[third_max_index] << endl;
    return 0;
}