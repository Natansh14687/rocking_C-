#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    return;
}

void reverse(int i, int j, vector<int>& v){
    for( i,j; j>=i; i++,j--){
        // v[i] = v[i] + v[j];
        // v[j] = v[i] - v[j];
        // v[i] = v[i] - v[j];
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

    }
    return;
}

// void rotate(int k, vector<int>& v){
//     for(int i=0,j=v.size()-k-1; j>=i; i++,j--){
//         for(int k=v.size()-k,t=v.size()-1; t>=k; k++,t--){
//             cout << v[i] << " ";
//         }
//     }
    
// }

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;
    if(k>v.size()) k = k % v.size();

    display(v);
    reverse(0,v.size()-k-1,v);
    reverse(v.size()-k,v.size()-1,v);
    reverse(0,v.size()-1,v);
    display(v);

    return 0;
}