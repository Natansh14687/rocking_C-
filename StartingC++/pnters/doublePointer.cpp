#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 4;
    int *ptr = &x;
    int **p = &ptr;
    cout << &x << " " << *ptr << " " << **p;
    return 0;
}