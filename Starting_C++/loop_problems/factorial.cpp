// Printing factorial of input n.
#include<iostream>
using namespace std;
int main() {
    int n,mul=1;
    cin >> n;
    for (int i=n; i>0; i--){
        mul*=i;
    }
    cout << mul << endl;
    return 0;
}