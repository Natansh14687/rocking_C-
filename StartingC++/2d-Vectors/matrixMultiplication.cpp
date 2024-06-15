#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int p,q;
    cin >> p >> q;
    vector<vector<int>> v1(n,vector<int>(m));
    vector<vector<int>> v2(p,vector<int>(q));
    if(m!=p){
        cout << "Matrix multiplication is not possible";
    }else{
        vector<vector<int>> res(n,vector<int>(q));
        for(int i=0; i<v1.size(); i++){
            for(int j=0; j<v1[0].size(); j++){
                cin >> v1[i][j];
            }
        }
        for(int i=0; i<v2.size(); i++){
            for(int j=0; j<v2[0].size(); j++){
                cin >> v2[i][j];
            }
        }
        for(int i=0; i<v1.size(); i++){
            for(int j=0; j<v2[0].size(); j++){
                res[i][j] = 0;
                for(int r=0; r<v1[0].size(); r++){
                    res[i][j] += v1[i][r] * v2[r][j];
                }
            }
        }
        for(int i=0; i<v1.size(); i++){
            for(int j=0; j<v2[0].size(); j++){
                cout << res[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}