// Reversing the digits of a given number.
#include<iostream>
using namespace std;
int main() {
    int n,rem=0;
    cin >> n;
    for (int i=0; n>0; i++){
        rem=n%10;
        cout << rem;
        n/=10;
    }
    return 0;
}