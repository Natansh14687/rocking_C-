#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

void swap(int i, int j, vector<int>& v){
    while(j>=i){
        if(v[i]==0) i++;
        else if(v[j] == 1) j--;
        if(i>j) break;
        else if(v[i] == 1 && v[j] == 0){
            v[i] = 0;
            v[j] = 1;
            j--;
            i++;
        }
    }
}

int main(){
    int n;
    cout << "Enter no. of 0s and 1s : ";
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    swap(0,v.size()-1,v);
    display(v);

    return 0;
}