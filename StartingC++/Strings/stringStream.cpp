#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "My name is            Natansh";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout << temp << " ";
    }
    return 0;
}