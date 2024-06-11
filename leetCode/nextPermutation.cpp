#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}

void swapping(int &i, int &j){
    int temp = i;
    i = j;
    j=temp;
}

void reverse(int i, int j, vector<int>& v){
    // int i=0, j=v.size()-1;
    for(i,j; i<=j; i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

void nextPermutation(vector<int>& v){
    int idx = -1;
    for(int i=v.size()-2; i>=0; i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(0,v.size()-1,v);
    }else{
        int j = -1;
        for(int i=idx; i<v.size()-1; i++){
            if(v[i]>v[idx]){
                j=i;
                break;
            }
        }
        
    reverse(idx+1, v.size()-1, v);
    swapping(v[idx],v[j]);
    }
}


int main(){
    vector<int> v={1,2,4,3};
    nextPermutation(v);
    display(v);
    return 0;
}