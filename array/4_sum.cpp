#include<bits/stdc++.h>
using namespace std;

// vector<vector<int>> four_sum(vector<int> arr , int n , int tar){
//     set<vector<int>> st;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 for(int l=k+1;l<n;l++){
//                     int sum = arr[i] + arr[j] + arr[k] + arr[l];
//                     if(sum == tar){
//                         vector<int> temp = {arr[i] , arr[j] , arr[k] , arr[l]};
//                         sort(temp.begin() , temp.end());
//                         st.insert(temp);
//                     }
//                 }
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin() , st.end());
//     return ans;
// }

// vector<vector<int>> four_sum(vector<int> arr, int n , int tar){
//     set<vector<int>> ans;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             set<int> temp;
//             for(int k=j+1;k<n;k++){
//                 int sum = arr[i] + arr[j] + arr[k];
//                 int fourth = tar - sum;
//                 if(temp.find(fourth) != temp.end()){
//                     ans.insert({arr[i],arr[j],arr[k],fourth});
//                 }
//                 temp.insert(arr[k]);
//             }
//         }
//     }
//     vector<vector<int>> res(ans.begin() , ans.end());
//     return res;
// }

vector<vector<int>> four_sum(vector<int> arr , int n , int tar){
    sort(arr.begin() , arr.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i] == arr[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1 && arr[j] == arr[j-1]) continue;
            int diff = tar - (arr[i]+arr[j]);
            int k = j+1;
            int l = n-1;
            while(k<l){
                int sum = arr[k] + arr[l];
                if(sum == diff){
                    ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                    k++;
                    l--;
                    while(k<l && arr[k] == arr[k-1]) k++;
                    while(k<l && arr[l] == arr[l+1]) l--;
                }
                else if(arr[k] + arr[l] < diff){
                    k++;
                }
                else{
                    l--;
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,5,5,3,2,1,4,2,3,1,4};
    int n = arr.size();
    int target = 11;
    // cout << "Enter target:- ";
    // cin >> target;
    vector<vector<int>> res = four_sum(arr,n,target);
    for(int i = 0 ; i < res.size() ; i++){
        for(int j = 0 ; j < res[i].size() ; j++){
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}