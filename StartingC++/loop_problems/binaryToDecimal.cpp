#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }
    int x=1,sum=0;
    for(int i=v.size()-1; i>=0; i--){
        sum+=(v[i]*x);
        x*=2;
    }
    cout << sum;
    return 0;
}