// Check if the given array is soted or not..
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    cout << "Enter the elements of the array : " << endl;
    for (int i=0; i<6; i++){
        int element;
        cin >> element;
        v.push_back(element);
    }
    int sort = 0;
    for (int i=0; i<v.size()-1; i++){
        if(v[i] > v[i+1]) {
            sort = 1;
            break;
        }
    }
    if (sort == 0) cout << "The array is sorted" << endl;
    else cout << "The array is not sorted" << endl;
    return 0;
}