#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cin >> v[i][j];
        }
    }
    for(int i=0; i<v.size(); i++){
        if(i%2==0){
            for(int j=0; j<v[0].size(); j++){
                cout << v[i][j] << " ";
            }
            cout << "\n";
        }else{
            for(int j=v[0].size()-1; j>=0; j--){
                cout << v[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}