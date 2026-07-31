#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int> arr){
    int maxlen = 0;
    int n = arr.size();
    unordered_map<int,int> mpp;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum == 0){
            maxlen = i+1;
        }
        else if(mpp.find(sum) != mpp.end()){
            maxlen = max(maxlen, i-mpp[sum]);
        }
        else{
            mpp[sum] = i;
        }
    }
    return maxlen;
}

int main(){
    vector<int> arr = {15,-2,2,-8,1,7,10,23};
    int result = subarray(arr);
    cout << result;
}