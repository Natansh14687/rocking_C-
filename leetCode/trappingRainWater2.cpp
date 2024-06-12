#include<bits/stdc++.h>
using namespace std;
int display(vector<int>& height){
    for(int i=0; i<height.size(); i++){
        cout << height[i] << " ";
    }
    cout << "\n";
}
int main(){
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> prev(height.size());
    prev[0] = -1;
    int max = height[0];
    for(int i=0; i<prev.size(); i++){
        prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    prev[prev.size()-1] = -1;
    max = height[height.size()-1];
    for(int i=prev.size()-1; i>=0; i--){
        if(max<prev[i]) prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    int water = 0;
    for(int i=1; i<height.size()-1; i++){
        if(prev[i]>height[i]){
        water +=(prev[i]-height[i]);
        }
    }
    cout << water;
    return 0;
}