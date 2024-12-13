#include<bits/stdc++.h>
using namespace std;

int countAgPairs(vector<char>& arr){
    int n = arr.size();
    int count = 0, countA = 0, countG = 0;
    for(int i=0; i<n; i++){
        if(arr[i]=='a'){
            if(countA==countG){
                count+=countA;
            }
            countA++;
        }
        if(arr[i]=='g'){
            countG++;
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    vector<char> ch;
    for(int i=0; i<n; i++){
        char x;
        cin >> x;
        ch.push_back(x);
    }

    cout << countAgPairs(ch);
}