#include<bits/stdc++.h>
using namespace std;

int max_sum(vector<int>& nums){
    int n = nums.size();
    long long maxsum = LONG_MIN;
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += nums[i];
        maxsum = max(sum,maxsum);
        if(sum<0){
            sum = 0;
        }
    }
    if(maxsum < 0) return 0;
    return maxsum;
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int result = max_sum(arr);
    cout << "Maximum sum: " << result;
    return 0;
}