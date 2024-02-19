// Printing an alphabet diamond using loop....
#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;
for (int i=0; i<n; i++){
    for(int j=1; j<=n-i; j++){
        cout << " ";
    }
    for(int j=65; j<=2*i+65; j++){
        cout << char(j);
    }
    cout << endl;
}
for (int i=(n-1); i>=1; i--){
     for(int j=0; j<=n-(i); j++){
        cout << " ";
    }
    for(int j=65; j<=2*i+63; j++){
        cout << char(j);
    }
    cout << endl;
}
    return 0;
}