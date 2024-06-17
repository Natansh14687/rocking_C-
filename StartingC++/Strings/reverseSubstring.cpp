#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "Enter a string of characters more than 5 : ";
    getline(cin,s);
    reverse(s.begin()+1,s.begin()+5);
    cout << s;
    return 0;
}