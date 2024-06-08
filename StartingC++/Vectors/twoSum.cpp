#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        v.push_back(input);
    }

    int x;
    cin >> x;
    vector <int> vrr;
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]+v[j] == x){
                cout << "(" << i << "," << j << ")" << "\n";
            }
        }
    }
    // cout << count;
    return 0;
}