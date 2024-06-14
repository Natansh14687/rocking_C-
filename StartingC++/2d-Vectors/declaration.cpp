#include<bits/stdc++.h>
using namespace std;
void change(vector<vector<int>>& v){     // 2D arrays can't be passed as parameters in functions without giving its size.
    v[0][1] = 2;
}
int main(){
    vector<vector<int>> v(3,vector<int>(4,100));
    change(v);
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    // v.pop_back();
    // for(int i=0; i<2; i++){
    //     for(int j=0; j<4; j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    cout << v.size() << "\n";
    cout << v[0].size() << "\n";

    return 0;
}