#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 3;
    float y = 6.43434;
    int *ptr = &x;
    float *ptrf = &y;
    float result = x+y;
    float *ptrResult = &result;
    // *ptrResult = *ptr + *ptrf;
    cout << *ptrResult;
    return 0;
}