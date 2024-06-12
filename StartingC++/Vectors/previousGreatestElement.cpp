#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> pge(12);
    pge[0] = -1;
    int max = v[0];
    for(int i=1; i<v.size()-1; i++){
        pge[i] = max;
        if(max<v[i]) max = v[i];
    }

    for(int i=0; i<v.size()-1; i++){
        cout << pge[i] << " ";
    }
    return 0;
}