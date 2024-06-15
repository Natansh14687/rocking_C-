#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int minRow = 0;
    int maxRow = n-1;
    int minCol = 0;
    int maxCol = m-1;
    vector<vector<int>> v(n,vector<int>(m));
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[0].size(); j++){
                cin >> v[i][j];
            }
        }
    while(maxRow>=minRow || maxCol>=minCol){
        for(int j=minCol; j<=maxCol; j++){
            cout << v[minRow][j] << " ";
        }
        minRow++;
        if(maxRow<minRow || maxCol<minCol) break;
        for(int i=minRow; i<=maxRow; i++){
            cout << v[i][maxCol] << " ";
        }
        maxCol--;
        if(maxRow<minRow || maxCol<minCol) break;
        for(int j=maxCol; j>=minCol; j--){
            cout << v[maxRow][j] << " ";
        }
        maxRow--;
        if(maxRow<minRow || maxCol<minCol) break;
        for(int i=maxRow; i>=minRow; i--){
            cout << v[i][minCol] << " ";
        }
        minCol++;
    }
    return 0;
}