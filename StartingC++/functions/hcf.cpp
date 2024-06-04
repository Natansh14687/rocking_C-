#include<bits/stdc++.h>
using namespace std;
int hcf(int x, int y){
    int result = 1;
    for(int i=1; i<=min(x,y); i++){
        if(x % i == 0 and y % i == 0) {
            result = i;
        }
    }
    return result;
}

int main(){
    int x,y;
    cin >> x >> y;
    cout << hcf(x,y);
    return 0;
}