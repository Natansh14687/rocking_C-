#include<bits/stdc++.h>
using namespace std;

// void swap(int x, int y){
//         int temp = x;
//         x = y;
//         y = temp;                        
// }
//---------------------------------------numbers are not swapped---------------------------------------
// int main(){
//     int x = 3;
//     int y = 4;
    
//     swap(x,y);
//     cout << x << " " << y;
//     return 0;
// }

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 3;
    int y = 4;
    int *p1 = &x;
    int *p2 = &y;
    
    swap(p1,p2);
    cout << x  << " " << y;
    return 0;
}