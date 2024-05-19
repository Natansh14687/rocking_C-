#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    float y;
    x = 10;
    y = 8.9775;
    cout << &x << "\n";
    cout << &y << "\n" << "\n";
    int *ptr = &x;
    float *ptrf = &y;
    cout << ptr << "\n";
    cout << ptrf << "\n" << "\n";
    cout << *ptr << "\n";     // ----> derefernce operator
    cout << *ptrf << "\n" << "\n";
    *ptr = 50;
    cout << x << "\n";
    cout << *ptr << "\n";
    return 0;
}