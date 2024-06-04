#include<bits/stdc++.h>
using namespace std;
void number(int n, int* fd, int* ld){
    *ld = n%10;
    while(n>=9){
        n = n/10;
    }
    *fd = n;
    return;
}
int main(){
    int n, firstDigit, lastDigit;
    cin >> n;
    int *ptr = &firstDigit;
    int *ptr2 = &lastDigit;
    number(n,ptr,ptr2);
    cout << firstDigit << " " << lastDigit;
    return 0;
}