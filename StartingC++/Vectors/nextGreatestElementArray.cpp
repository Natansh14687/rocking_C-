#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> nge(12);
    nge[nge.size()-1] = -1;
    int max = v[v.size()-1];
    for(int i=nge.size()-2; i>=0; i--){
        nge[i] = max;
        if(max<v[i]) max = v[i];
    }
    for(int i=0; i<nge.size(); i++){
        cout << nge[i] << " ";
    }
    return 0;
}