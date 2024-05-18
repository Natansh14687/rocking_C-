// Writing a program to print squares of the first five natural numbers.
#include<iostream>
using namespace std;

int square(int num1){
    return num1*num1;
}

int main() {
    for(int i=1; i<=5; i++){
        cout << square(i) << endl;
    }
return 0;
}