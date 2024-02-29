// Find the last occurence of an element x in the given array.
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    int x;
    cin >> x;
    for(int i=0; i<8; i++){
        int element;
        cin >> element;
        v.push_back(element);
    }
    int index = -1;
    for(int i=0; i<v.size(); i++){
        if(v[i]==x) index = i;
    }
    cout << index;
    return 0;
}