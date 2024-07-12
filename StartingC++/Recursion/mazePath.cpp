#include<bits/stdc++.h>
using namespace std;
int numberOfPath(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr == er && sc == ec) return 1;
    int noOfCol = numberOfPath(sr,sc+1,er,ec);
    int noOfRow = numberOfPath(sr+1,sc,er,ec);
    int totalWays = noOfCol + noOfRow;
    return totalWays;
}
void paths(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr == er && sc == ec){
        cout << s << "\n";
        return;
    }
    paths(sr,sc+1,er,ec,s+"R");
    paths(sr+1,sc,er,ec,s+"D");
}
int main(){
    cout << numberOfPath(1,1,3,3) << "\n";
    paths(1,1,3,3,"");
}