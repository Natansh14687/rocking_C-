#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Natansh";
    s.push_back('h');
    cout << s;
    cout << "\n";
    s.pop_back();
    cout << s;
    cout << "\n";
    cout << s + "abc";
    reverse(s.begin(),s.end());
    cout << "\n";
    cout << s;
    reverse(s.begin(),s.end());
    cout << "\n";
    cout << s;
    reverse(s.begin()+2, s.end()-2);
    cout << "\n";
    cout << s;
    return 0;
}