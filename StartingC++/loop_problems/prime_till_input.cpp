// Printing n prime numbers...
#include<iostream>
using namespace std;
int main() {
    int n,prime=0;
    cin >> n;
    for (int i=2; i<n; i++){
        if(n%i != 0){
            prime = 1;
            break;
        }
        else {
            prime = 0;
            break;
        }
    }
    if (n==1) cout << n << " is not a prime number";
    else if (prime ==1) cout << n << " is a prime number";
    else if (prime == 0) cout << n << " is a composite number";
    return 0;
}