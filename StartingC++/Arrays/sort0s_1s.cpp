#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5];
for (int i = 0; i < 5; i++) {
    cin >> arr[i];
}
int pre[5];
pre[0] = arr[0];
for (int i = 1; i < 5; i++) {
    pre[i] = pre[i-1] + arr[i];
}

for (int i = 0; i < 5; i++) {
    cout << pre[i] << " ";
}
}