// Move all -ve numbers to beginning and +ve to end with constant xtra space.
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

void swap(int i, int j, vector<int>& v){
    while(i<=j){
        if(v[i]<0) i++;
        else if(v[j]>0) j--;
        else if(v[j]<0 && v[i]>0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main(){
    int n;
    cout << "Enter no. of +ve numbers : ";
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    swap(0,v.size()-1,v);
    display(v);

    return 0;
}