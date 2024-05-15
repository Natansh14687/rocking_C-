#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N,K;
        cin >> N >> K;
        int arr[N];
        for(int i=0; i<N; i++){
            cin >> arr[i];
        }
        int sumOfArr=0;
        for(int i=0; i<N; i++){
            sumOfArr += arr[i];
        }
        int result = 0;
        for(int i=0; i<N; i++){
            if(arr[i] + K > sumOfArr - arr[i]) result++;
        }
        cout << result << "\n";
    }
    return 0;
}