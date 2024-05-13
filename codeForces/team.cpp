#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> num;
    for(int i=0; i<n; i++){
        vector<int> rows;
        for(int i=0; i<3; i++){
            int insert;
            cin >> insert;
            rows.push_back(insert);
        }
        num.push_back(rows);
    }
    int yes=0;
    for(int i=0; i<n; i++){
        int count=0;
        for (int j=0; j<3; j++){
            if(num[i][j]==1) count++; 
        }
        if(count>=2) yes++;
    }
    cout << yes;
    
    return 0;
}