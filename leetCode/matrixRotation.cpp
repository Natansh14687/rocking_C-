#include<bits/stdc++.h>
using namespace std;
void display(vector<vector<int>>& v){
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v.size(); j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }
    for(int i=0; i<v.size(); i++){
        for(int j=i; j<v.size(); j++){
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
    for(int k=0; k<v.size(); k++){
        int i=0, j=v.size()-1;{
            for(i,j; j>=i; i++,j--){
                int temp = v[k][i];
                v[k][i] = v[k][j];
                v[k][j] = temp;
            }
        }
    }
    display(v);
    return 0;
}