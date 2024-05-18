// Print the sum of the stream of N integers in the input using do-while loop.
#include<iostream>
using namespace std;
int main() {
    int n, i=1;
    cout << ("Enter the number : ");
    cin >> n;
    int sum = 0;
    do {
        sum+=i;
        i++;
    } while(i<=n);
    cout << ("The sum of natural numbers from 1 to ") << n << (" is ") << sum << endl;

    return 0;
}