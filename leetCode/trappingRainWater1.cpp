#include<bits/stdc++.h>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}
vector<int> prevMax(vector<int>& height){
    vector<int> prev(height.size());
    prev[0] = -1;
    int max = height[0];
    for(int i=1; i<prev.size(); i++){
        prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    return prev;
}
vector<int> nextMax(vector<int>& height){
    vector<int> next(height.size());
    next[next.size()-1] = -1;
    int max = height[height.size()-1];
    for(int i=next.size()-2; i>=0; i--){
        next[i] = max;
        if(max<height[i]) max = height[i];
    }
    return next;
}
vector<int> minArray(vector<int>& prev, vector<int>& next){
    vector<int> mini(prev.size());
    for(int i=0; i<prev.size(); i++){
        mini[i]=min(prev[i],next[i]);
    }
    return mini;
}
int trap(vector<int>& height){
    vector<int> prev = prevMax(height);
    vector<int> next = nextMax(height);
    vector<int> mini = minArray(prev,next);
    int water = 0;
    for(int i=1; i<height.size()-1; i++){
        if(mini[i]>height[i]){
            water += (mini[i]-height[i]);
        }
    }
    return water;
}
int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> prev = prevMax(height);
    display(prev);
    vector<int> next = nextMax(height);
    display(next);
    vector<int> mini = minArray(prev,next);
    display(mini);
    int waterTrapped = trap(height);
    cout << waterTrapped;
    return 0;
}