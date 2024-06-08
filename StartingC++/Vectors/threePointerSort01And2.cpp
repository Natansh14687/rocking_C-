// dutch flag algo

#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}

void swaping(vector<int>& v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while(mid<=high){
        if(v[mid] == 2) {
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--;
        }
        else if(v[mid] == 0){
            int temp = v[low];
            v[low] = v[mid];
            v[mid] = temp;
            low++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
    }

}

int main(){
    int n;
    cout << "Enter the number of 0s 1s and 2s : ";
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    swaping(v);
    display(v);

    return 0;
}