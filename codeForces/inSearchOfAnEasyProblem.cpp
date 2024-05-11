#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n];
    int size = sizeof(array)/sizeof(array[0]);
    int result = 0;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    for(int i = 0; i<size; i++){
        if (array[i]==1){
            result = true;
            break;
        }
        else result = false;
    }
    if(result == true) cout << "HARD";
    else cout << "EASY";
    return 0;
}