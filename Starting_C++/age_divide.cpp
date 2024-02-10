#include<iostream>
using namespace std;
int main() {
    int age;
    cout << ("Write your age : ");
    cin >> age;
    if(age < 12) cout << ("child");
    else if (age < 18) cout << ("Teenager");
    else cout << ("Adult");
    
    return 0;
}