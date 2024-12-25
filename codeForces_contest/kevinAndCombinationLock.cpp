#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
            string str = to_string(n);

            while(n!=0){
                size_t pos = str.find("33");
                str.erase(pos,2);
                n = stoi(str);
                if(n>=33) n-=33;
                else break;
            }
            if(n==0) cout << "YES" << "\n";
            else cout << "NO" << "\n";

        
    }
    return 0;
}
