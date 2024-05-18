#include<iostream>
using namespace std;
int main() {
    int n,count=0;
    cout << "Enter the number : ";
    cin >> n;
    while(n>0){
        count = count + 1;
        n=n/10;
    }
    cout << count;
    return 0;
}