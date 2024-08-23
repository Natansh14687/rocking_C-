#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v(5,vector<int>(5));
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> v[i][j];
        }
    }
    int r,c;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(v[i][j]==1){
                r=i;
                c=j;
            }
        }
    }
    int count = 0;
    while(r!=2||c!=2){
        if(r<2){
            r++;
            count++;
        }
        else if(r>2){
            r--;
            count++;
        }
        else if(c>2){
            c--;
            count++;
        }
        else if(c<2){
            c++;
            count++;
        }
    }
    cout << count;
    return 0;
}