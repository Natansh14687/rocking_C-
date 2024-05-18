// finding sum of digits in a given number...
#include<iostream>
using namespace std;
int main() {
    int n,sum=0,rem=0;
    cin >> n;
    for (int i=0; n>0; i++) {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    cout << sum << endl;
    return 0;
}