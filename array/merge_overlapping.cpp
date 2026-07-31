#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> merge_overlapping(vector<pair<int,int>> arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    vector<pair<int,int>> ans;
    for(int i=0;i<n;i++){
        int start = arr[i].first;
        int end = arr[i].second;
        if(!ans.empty() && end <= ans.back().second){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j].first <= end){
                end = max(end,arr[j].second);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }
    return ans;
}


int main(){
    vector<pair<int,int>> arr = {{1,3}, {2,6}, {8,9}, {9,11}, {8,10}, {2,4}, {15,18}, {16,17}};
    vector<pair<int,int>> result = merge_overlapping(arr);
    for(auto& it : result){
        cout << '[' << it.first << ',' << it.second << ']';
    }
    cout << endl;
}