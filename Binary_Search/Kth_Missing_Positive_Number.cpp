#include<bits/stdc++.h>
using namespace std;

// int Kth_Missing_Positive_Number(vector<int>& arr, int k) {
//     int n = arr.size();
//     int j = 1;
//     for(int i =0;i<n;i++){
//         while(arr[i] > j){
//             k--;
//             if(k==0) return j;
//             j++;
//         }
//         j++;
//     }
//     return n+k;
// }

int Kth_Missing_Positive_Number(vector<int>& arr, int k) {
    
}

int main(){
    vector<int> arr = {1,2,3,4};
    int k =1;
    int result = Kth_Missing_Positive_Number(arr,k);
    cout<<result;
    return 0;
}