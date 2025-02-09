#include<bits/stdc++.h>
using namespace std;

void print(int a){
    cout << a << " ";
}

void show(int i, vector<int>& v){
    if(i == v.size()){
        return;
    }
    print(v[i]);
    show(i+1, v);
}

int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(2);
    arr.push_back(9);
    
    show(0,arr);
    return 0;
}