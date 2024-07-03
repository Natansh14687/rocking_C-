#include<bits/stdc++.h>
using namespace std;
int power(int a, int b){
    if(a==0) return 0;
    if(a==0&&b==0){
        cout << "not defined";
        return -1;
    }
    if (b==0) return 1;
    return a*power(a,b-1);
    
}
int main(){
    cout << power(3,5);
    return 0;
}