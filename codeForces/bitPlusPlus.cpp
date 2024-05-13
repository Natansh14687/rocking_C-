#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int X = 0;
    for(int i=0; i<n; i++){
        string x;
        cin >> x;
        if((x=="++X") || (x=="X++")) X=X+1;
        else if((x=="--X") || (x=="X--")) X=X-1;
    }
    cout << X;
    return 0;
}