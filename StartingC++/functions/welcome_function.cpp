#include<iostream>
using namespace std;

string welcome(string name){
    return "Welcome "+name;
}

int main(){
    string str = welcome("Natansh");
    cout << str;
    return 0;
}