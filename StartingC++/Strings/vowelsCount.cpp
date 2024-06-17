#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1; 
    getline(cin,str1);
    int count = 0;
    for(int i=0; str1[i]!='\0'; i++){
        if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u') count++; 
    }

    cout << count << "\n";
    return 0;
}