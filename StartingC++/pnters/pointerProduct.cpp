#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 8,y = 4;
    int *ptr = &x;
    int *ptrr = &y;
    cout << (*ptr) * (*ptrr);
    return 0;
}