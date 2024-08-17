#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8] = {3,1,2,5,4,6,2,3};
    int ans[8];
    int n = sizeof(arr)/sizeof(arr[1]);
    stack<int> st;
    ans[n-1] = -1;
    st.push(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        while(st.top()<=arr[i]){
            st.pop();
            if(st.size()==0) break;
        }
        if(st.size()==0) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);

    }

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}