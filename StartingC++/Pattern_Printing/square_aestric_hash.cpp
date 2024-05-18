// Printing Square using alternate aestric and hash.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows and cols : ";
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if(j % 2 == 0 && i%2 != 0) cout << " #";
            else if (i%2==0 && j%2!=0) cout << " #";
            else cout << " *";
            
        }
        cout << endl;
    }
    return 0;
}