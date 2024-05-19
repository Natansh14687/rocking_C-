#include<bits/stdc++.h>
using namespace std;

void indexOfFirstAndLast(string s, char ch, int *f, int *l){
    for(int i=0; i<s.size(); i++){
        if(s[i]==ch){
            *f=i;
            break;
        }
    }
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]==ch){
            *l=i;
            break;
        }
    }
}
int main(){
    string s = "aaabac";
    char ch = 'a';
    int firstindex = -1;
    int lastindex = -1;
    int *p1 = &firstindex;
    int *p2 = &lastindex;

    indexOfFirstAndLast(s,ch,p1,p2);
    cout << firstindex << " " << lastindex;

    return 0;
}