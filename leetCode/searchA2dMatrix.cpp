#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cin >> v[i][j];
        }
    }
    int target;
    cin >> target;
    int i=0, j=v[0].size()-1;
    while(i<v.size() && j>=0){
        if(v[i][j] == target){
            cout << "true";
            return 0;
        }
        else if(v[i][j]>target) j--;
        else i++;
    }
    cout << "false";
    return 0;
}