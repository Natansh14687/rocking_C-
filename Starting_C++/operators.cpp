#include<iostream>
using namespace std;
int main() {
    int num1 = 6, num2 = 4;
    //Arithmetic operators
     cout << num1 + num2 << endl;   // 10
     cout << num1 - num2 << endl;   // 2
     cout << num1 / num2 << endl;   // 1
     cout << num1 * num2 << endl;   // 24
     cout << num1 % num2 << endl;   // 2
     cout << ++num1 << endl;    // 7
     cout << --num2 << endl << endl;    // 3

     //Relational Operators
     cout << (num1 == num2) << endl;    // false
     cout << (num1 != num2) << endl;    // true
     cout << (num1 > num2) << endl;     // true
     cout << (num1 < num2) << endl;     // false
     cout << (num1 >= 6) << endl;       // true
     cout << (2 <= num2) << endl << endl;       // true

     //Logical Operators
     cout << (num1 > 8 && num2 > 2) << endl; // false
     cout << (num1 > 8 || num2 > 2) << endl; // true
     cout << (!num1) << endl << endl; // false

     // Assignment Operators
     cout << (num1 = 2) << endl; // 2
     cout << (num1 += 3) << endl; // 5
     cout << (num1 -= 1) << endl; // 4
     cout << (num1 /= 3) << endl; // 1
     cout << (num1 %= 3) << endl << endl; // 1

     // size of operator
     cout << (sizeof(num1)) << endl; //4

     // Ternary Operator -> condition ? Expression1 : Expression2;
     num1 >= 3 ? cout << ("Yeah") : cout << ("Nope"); // Nope

     // Address operator 
     cout << &num2 << endl; // Prints address of num2
     
    return 0;
}