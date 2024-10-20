#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Raghav          is a maths teacher";
    int count = 1;
    for(int i=0; i<s.length(); i++){
        if(s[i-1] == ' ' && s[i]!=' '){
            count++;
        }
    }
    cout << count;
    return 0;
}
