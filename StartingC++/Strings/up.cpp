#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Natansh";
    for(int i=0; str[i]!='\0'; i++){
        if(i%2==0) str[i] = 'a';
    }
    cout << str;
    return 0;
}