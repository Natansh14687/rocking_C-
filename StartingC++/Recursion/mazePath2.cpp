#include<bits/stdc++.h>
using namespace std;
int maze(int er, int ec){
    if(er < 1 || ec < 1) return 0;
    if(er == 1 && ec == 1) return 1;
    int rightMove = maze(er,ec-1);
    int downMove = maze(er-1,ec);
    int totalWays = rightMove + downMove;
    return totalWays;
}
void paths(int er, int ec, string s){
    if(er < 1 || ec < 1) return;
    if(er == 1 && ec == 1){
        cout << s << "\n";
        return;
    }
    paths(er,ec-1,s+"R");
    paths(er-1,ec,s+"D");
}
int main(){
    cout << maze(3,3) << "\n";
    paths(3,3,"");
}