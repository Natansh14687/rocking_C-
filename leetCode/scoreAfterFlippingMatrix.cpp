#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cin >> v[i][j];
        }
    }
    for(int i=0; i<v.size(); i++){
        if(v[i][0] == 0){
            for(int j=0; j<v[0].size(); j++){
                if(v[i][j] == 0) v[i][j] = 1;
                else v[i][j] = 0;
            }
        }
    }
    for(int j=0; j<v[0].size(); j++){
        int noz = 0;
        int noo = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
            for(int k=0; k<v.size(); k++){
                if(v[k][j] == 0) v[k][j] = 1;
                else v[k][j] = 0;
            }
        }
    }
    int sum=0;
    for(int i=0; i<v.size(); i++){
        int x=1;
        for(int j=v[0].size()-1; j>=0; j--){
            sum+=(v[i][j]*x);
            x*=2;
        }
    }
    cout << sum;
    return 0;
}