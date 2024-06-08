#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " "; 
    }
    cout << "\n";
}

void sorting(vector<int>& v){
    int count0s = 0, count1s = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] == 0) count0s++;
        else count1s++;
    }
    for(int i=0; i<v.size(); i++){
        if(i<count0s) v[i] = 0;
        else v[i] = 1;
    }
}

int main(){
    int n;
    cout << "Enter n number of 0s and 1s : ";
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