// binary to +ve integer calculator 
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,integer=0,last_digit=0,power=1;
    cout << "Enter the binary number in 0s and 1s only : ";
    cin >> n;
    for(int i=0; n>0; i++){
        last_digit=n%10;
        // integer=integer+last_digit*pow(2,i); This can also be done using function from cmath library..
        integer=integer+last_digit*power;
        power*=2;
        n/=10;
    }
    cout << integer;
    return 0;
}


