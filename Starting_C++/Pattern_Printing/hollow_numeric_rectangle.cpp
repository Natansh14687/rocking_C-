#include<iostream>
using namespace std;
int main() {
    int rows,cols;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "Enter the number of cols : ";
    cin >> cols;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=cols; j++){
            if(i==1 || j==1 || i==rows || j==cols) cout << j;
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}