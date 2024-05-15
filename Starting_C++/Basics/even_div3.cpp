// Write a program to print the value if it is even and divisible by 3
#include<iostream>
using namespace std;
int main() {
    int num;
    cout << ("Enter the number : ");
    cin >> num;
    if (num % 2 == 0 && num % 3 == 0) cout << ("The number is divisible by 3 and is even");
    else if ( num % 2 == 0 && num % 3 != 0) cout << ("The number is even but is not divisible by 3");
    else if (num % 3 ==0 && num % 2 != 0) cout << ("The number is not even but divisible by 3");
    else cout << ("The number is neither divisible by 3 nor even");
    return 0;
}