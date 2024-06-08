#include<bits/stdc++.h>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    return;
}

void part(int i, int j, vector<int>& v){
    for(i,j; j>=i; i++,j--){
        v[i] = v[i] + v[j];
        v[j] = v[i] - v[j];
        v[i] = v[i] - v[j];
    }
    return;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    display(v);
    part(3,6,v);
    display(v);
    return 0;
}