// Given two numbers a nd b. Find a raise to the power b.
#include<iostream>
using namespace std;
int main (){
    int a,b,mul=1;
    cin >> a >> b;
    for (int i=1; i<=b; i++){
        mul*=a;
    }
    cout << mul << endl;
    return 0;
}