#include<bits/stdc++.h>
using namespace std;

int split(vector<int> arr, int mid , int n){
    int subsum = 0 , count = 1;
    for(int i=0;i<=n;i++){
        if(subsum + arr[i] <= mid){
            subsum += arr[i];
        }
        else{
            count++;
            subsum = arr[i];
            }
        }
        return count;
    }


int splitArray(vector<int> arr , int n, int m){
    int low = *max_element(arr.begin(), arr.end()), high = accumulate(arr.begin(),arr.end(),0);
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(split(arr,mid,n) <= m){
            high = mid-1;
            ans = mid;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {7,2,5,10,8};
    int n = arr.size();
    int m = 5;
    int result = splitArray(arr, n, m);
    cout << result;
}