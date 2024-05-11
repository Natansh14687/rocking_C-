#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> str;
    for(int i=0; i<n; i++){
        string input;
        cin >> input;
        str.push_back(input);
    }
    for(int i=0; i<n; i++){
        if(str[i].size() <= 10) cout << str[i] << "\n";
        else {
            cout << str[i][0] << str[i].size() - 2 << str[i][str[i].size()-1] << "\n";
        }
    }
    return 0;
}