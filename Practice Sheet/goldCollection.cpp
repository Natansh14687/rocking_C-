#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    int pre[N];
    pre[0]=arr[0];
    for(int i=1; i<N; i++){
        pre[i] = pre[i-1] + arr[i];
    }
    int Q;
    cin >> Q;
    // int nxt[Q][2];
    // for(int i=0; i<Q; i++){
    //     for(int j=0; j<2; j++){
    //         cin >> nxt[i][j];
    //     }
    // }
    while(Q--){
        // Q--;
        int startval, endval;
        cin >> startval >> endval;
            if(startval==1){
                cout << pre[endval-1] << "\n";
            } 
            else{
                cout << pre[endval-1]-pre[startval-2] << "\n";
            }
    }
    // for(int i=0; i<Q; i++){
    //     int sum = 0;
    //     for(int j=nxt[i][0] ;j<nxt[i][1]+1 ;j++){
    //         sum+=arr[j-1];
    //     }
    //     cout << sum << "\n";
    // }
    }
    return 0;
}



