#include<iostream>
using namespace std;
int main(){
//     int T;
//     cin >> T;
//     for(int k=0; k<T; k++){
//     int N;
//     cin >> N;
//     int arr[N];
//     for(int i=0; i<N; i++){
//         cin >> arr[i];
//     }
//     int Q;
//     cin >> Q;
//     int nxt[Q][2];
//     for(int i=0; i<Q; i++){
//         for(int j=0; j<2; j++){
//             cin >> nxt[i][j];
//         }
//     }
//     for(int i=0; i<Q; i++){
//         int sum = 0;
//         for(int j=nxt[i][0] ;j<nxt[i][1]+1 ;j++){
//             sum+=arr[j-1];
//         }
//         cout << sum << "\n";
//     }
//     }
//     return 0;
//}

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

