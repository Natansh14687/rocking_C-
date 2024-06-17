#include<bits/stdc++.h>
using namespace std;
int main(){
    // char ch[5] = {'a','b','c','d','e'};
    // cout << ch[4];
    // char str[5] = "abcd";
    // for(int i=0; i<5; i++){
    //     cout << str[i] << " ";
    // }
    // cout << int(str[4]);
    char str1[] = "abcdef";
    for(int i=0; str1[i]!='\0'; i++){
        cout << str1[i] << " ";
    }
    cout << str1;
    cout << "\n";
    char str2[] = {'a','b','c','\0','d','e','f'};
    cout << str2;

    cout << "\n";

    string str4 = "hello I am Natansh";
    cout << str4;

    cout << "\n";

    // string str5;
    // cin >> str5;
    // cout << str5;

    cout << "\n";

    string str6;
    getline(cin,str6);
    cout << str6;
    cout << str6[9];

    return 0;
}