// Count the number of occurrences of a particular element x...
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    cout << "Enter the array : " << endl;
    for (int i=0; i<8; i++){
        int element;
        cin >> element;
        v.push_back(element);
    }
    int x,occurrence_count=0;
    cout << "Enter the value of x : " << endl;
    cin >> x;
    for(int i=0; i<v.size(); i++){
        if(v[i]==x) occurrence_count++;
    }
    cout << "Occurrence of " << x << " in the array is : " << occurrence_count << endl;
    return 0;
}