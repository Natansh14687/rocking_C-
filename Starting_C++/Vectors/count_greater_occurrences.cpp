// Count the numbers of elements which are strictly greater than the value x..
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    cout << "Enter the elements of array : " << endl;
    for (int i=0; i<8; i++){
        int element;
        cin >> element;
        v.push_back(element);
    }
    int x,count=0;
    cout << "Enter the value of x : " << endl;
    cin >> x;
    for (int i=0; i<v.size(); i++){
        if (v[i]>x) count++;
    }
    cout << count << endl;
    return 0;
}