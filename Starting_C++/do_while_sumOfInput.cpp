// printing the sum of inputs taken.
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << ("Enter the number of time you wanna take input : ");
    cin >> n;
    int sum = 0;
    do {
        int i;
        cin >> i;
        sum+=i;
        n--;
    } while(n>0);
    cout << ("The sum is : ") << sum << endl;
    return 0;
}