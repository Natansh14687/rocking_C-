// Given two numbers a and b, write a program using functions to print all the odd numbers b/w them...
#include<iostream>
using namespace std;

bool odd(int num1){
    if (num1%2!=0) return true;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    for (int i=num1; i<=num2; i++){
        if(odd(i)) cout << i << endl;
    }
    return 0;
}