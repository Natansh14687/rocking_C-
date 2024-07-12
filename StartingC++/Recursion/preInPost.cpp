#include<bits/stdc++.h>
using namespace std;
void pip(int n){
    if(n==0) return;
    cout << "pre " << n << "\n";
    pip(n-1);
    cout << "In " << n << "\n";
    pip(n-1);
    cout << "Post " << n << "\n";
}
int main(){
    pip(3);
    return 0;
}