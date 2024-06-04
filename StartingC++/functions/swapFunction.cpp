#include<bits/stdc++.h>
using namespace std;
void swap (int x, int y){
    x = x + y;
    x = x - y;
    y = x - y;
    return;
}
int main(){
    int x = 10, y = 20;
    swap(x,y);
    cout << x << " " << y << "\n"; 
    return 0;
}   // Not working