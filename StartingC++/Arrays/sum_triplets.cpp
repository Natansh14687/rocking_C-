// Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
using namespace std;

int main() {
    int array[8];
    cout << "Enter the elements of an array : " <<endl;
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        cin >> array[i];
    }
    int x, triplets=0;
    cout << "Enter the value of x : ";
    cin >> x;
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        for(int j=i+1; j<sizeof(array)/sizeof(array[0]); j++){
            for(int k=j+1; k<sizeof(array)/sizeof(array[0]); k++){
                if(array[i]+array[j]+array[k]==x) triplets++;
            }
        }
    }
    cout << triplets << endl;
    return 0;
}