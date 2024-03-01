// Find the unique number in the given array where all the elements are being repeated twice with one value being unique.
// This method used in the code is called Array Manipulation.
#include<iostream>
using namespace std;

int main(){
    int array[7];
    cout << "Enter the elements of the array : " << endl;
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        cin >> array[i];
    }
    int unique = -1;
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        for(int j=i+1; j<sizeof(array)/sizeof(array[0]); j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        if(array[i]>0) unique=array[i];
    }
    cout << "unique element is : " << unique << endl;
    return 0;
}