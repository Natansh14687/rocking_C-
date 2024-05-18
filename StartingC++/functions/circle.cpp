// Given radius of a circle. Write a function to print the area and circumference of the circle.
#include<iostream>
using namespace std;

double area(int x){
    return 3.14*x*x;
}

double circumference(int x){
    return 3.14*2*x;
}

int main(){
    int x;
    cin >> x;
    cout << area(x) << endl << circumference(x) << endl;
    return 0;
}