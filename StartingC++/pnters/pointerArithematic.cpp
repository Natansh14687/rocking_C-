#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1 = 4;
    int *ptrint = &num1;
    double num2 = 4.636353;
    double *ptrdob = &num2;

    cout << ptrint << " " << ptrint + 1 << " " << ptrint - 1 << "\n";
    cout << ptrdob << " " << ptrdob +1 << " " << ptrdob - 1 << "\n";
    return 0;
}