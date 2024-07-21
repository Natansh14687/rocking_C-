#include<bits/stdc++.h>
using namespace std;

vector<string> stringInVector(string s){
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss >> temp){
        v.push_back(temp);
    }

    for(int i=0, j=v.size()-1; i<j; i++,j--){
        swap(v[i],v[j]);
    }
    return v;
}

string vectorToString(const vector<string>& v, const string& separator = " ") {
    string result;
    for (size_t i = 0; i < v.size(); ++i) {
        result += v[i];
        if (i < v.size() - 1) {
            result += separator;  // Add separator between elements
        }
    }
    return result;
}

int main(){
    string s = "the sky is blue";
    vector<string> revvector = stringInVector(s);
    for(int i=0; i < revvector.size(); i++){
        cout << revvector[i] << " ";
    }
}