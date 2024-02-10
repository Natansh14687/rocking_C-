#include<iostream>
using namespace std;
int main() {
    int a,b,temp;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "The first number is " << a << " and the second number is " << b << endl;
 return 0;   
}