// adding two numbers using functions.
#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main() {
    int a , b;
    cin >> a >> b;
    int addition = add(a,b);
    cout << addition;
    return 0;
}