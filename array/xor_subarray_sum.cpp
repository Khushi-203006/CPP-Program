#include <bits/stdc++.h>
using namespace std;

// int xor_subarray(vector<int> arr, int sum){
//     int n = arr.size();
//     int cnt = 0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int xor_sum = 0;
//             for(int k=i;k<=j;k++){
//                 xor_sum = xor_sum^arr[k];
//             }
//             if(xor_sum == sum) cnt++;
//         }
//     }
//     return cnt;
// }

// int xor_subarray(vector<int> arr, int sum){
//     int n=arr.size();
//     int cnt = 0;
//     for(int i=0;i<n;i++){
//         int xor_sum = 0;
//         for(int j=i;j<n;j++){
//             xor_sum ^= arr[j];
//             if(xor_sum == sum) cnt++;
//         }
//     }
//     return cnt;
// }

int xor_subarray(vector<int> arr,int sum){
    int n = arr.size();
    int cnt = 0;
    map<int,int> mpp;
    int xr = 0;
    mpp[xr]++;
    for(int i=0;i<n;i++){
        xr = xr ^ arr[i];
        int x = xr ^ sum;
        cnt+= mpp[x];
        mpp[xr]++;
    }
    return cnt;
}

int main(){
    vector<int> arr = {4,2,2,6,4};
    int sum = 6;
    int result = xor_subarray(arr,sum);
    cout << result; 
}