// Search if a given element is present in the array or not. If it is not present then return -1 else return the index
#include<iostream>
using namespace std;

int main() {
    int array[5],present;
    int size = sizeof(array)/sizeof(array[0]);
    cout << "Enter the elements of array" << endl;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    cout <<"Enter the value you wanna find in the array" << endl;
    cin >> present;
    int index=-1;
    for(int i=0; i<size; i++){
        if (array[i]==present){
            index=i;
            break;
        }
    }
    cout << index << endl;
    return 0;
}