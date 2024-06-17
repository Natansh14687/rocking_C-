#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "Enter a string of even length : ";
    getline(cin,s);
    reverse(s.begin(),s.end()-(s.length()/2));
    cout << s;
    return 0;
}