// Printing the sum of first n natural numbers.
#include<iostream>
using namespace std;
int main() {
    int n=1,i=1;
    cout << ("Enter a number : ");
    cin >> n;
    int sum = 0;
    while(i<=n) {
        sum = sum + i;
        i++;
    }
    cout << ("The sum of natural numbers from 1 to ") << n << (" is ") << sum << endl; 
    return 0;

}