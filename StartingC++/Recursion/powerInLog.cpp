#include<bits/stdc++.h>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
    int num = power(a,b/2);
    if(b%2==0){
    return num*num;
    }
    else return num*num*a;
}
int main(){
    cout << power(3,3);
    return 0;
}