#include<iostream>
using namespace std;
int main() {
    int n,last_digit=0,rev=0;
    cin >> n;
    for (int i=1; n>=1; i++){
        last_digit=n%10;
        // rev = rev*10 + last_digit;
        cout << last_digit;
        n/=10;
    }
    // cout << rev;
    return 0;
}