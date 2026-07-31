#include<bits/stdc++.h>
using namespace std;

vector<int> heap_sort(vector<int> arr , int n){
    priority_queue<int,vector<int>,greater<int>> minh;
    for(int i=0;i<n;i++){
        minh.push(arr[i]);
    }
    vector<int> ans;
    while(!minh.empty()){
        ans.push_back(minh.top());
        minh.pop();
    }
    return ans;
}   

int main(){
    vector<int> arr = {32,44,12,89,99,87,54,18};
    int n = arr.size();
    vector<int> result = heap_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}