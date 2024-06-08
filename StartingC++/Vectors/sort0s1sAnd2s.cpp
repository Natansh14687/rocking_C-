#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

void sorting(vector<int>& v){
    int count0s = 0, count1s = 0, count2s = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] == 0) count0s++;
        else if(v[i] == 1) count1s++;
        else if(v[i] == 2) count2s++;
    }
    for(int i=0; i<v.size(); i++){
        if(i<count0s) v[i] = 0;
        else if(i<count0s + count1s) v[i] = 1;
        else v[i] = 2;
    }
}

int main(){
    int n;
    cout << "Enter no. of 0s 1s and 2s : ";
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sorting(v);
    display(v);

    return 0;
}