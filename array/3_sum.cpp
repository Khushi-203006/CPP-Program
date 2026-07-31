#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> three_sum(vector<int> arr, int n) {
//     set<vector<int>> st;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             for (int k = j + 1; k < n; k++) {
//                 if (arr[i] + arr[j] + arr[k] == 0) {
//                     vector<int> temp = {arr[i], arr[j], arr[k]};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }
//     vector<vector<int>> result(st.begin(), st.end());
//     return result;
// }

// vector<vector<int>> three_sum(vector<int> arr,int n){
//     set<vector<int>> st;
//     for(int i=0;i<n;i++){
//         set<int> st1;
//         for(int j=i+1;j<n;j++){
//             int third = -(arr[i] + arr[j]);
//             if(st1.find(third) != st1.end()){
//                 vector<int> temp = {arr[i],arr[j],third};
//                 sort(temp.begin() , temp.end());
//                 st.insert(temp);
//             }
//             st1.insert(arr[j]);
//         }
//     }
//     vector<vector<int>> result(st.begin(), st.end());
//     return result;
// }

vector<vector<int>> three_sum(vector<int> arr,int n){
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i] == arr[i-1]) continue;
        int j = i+1;
        int k = n-1;
        while(j<k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum < 0){
                j++;
                while(j<k && arr[j]==arr[j-1]) j++;
            }
            else if(sum > 0){
                k--;
                while(j<k && arr[k]==arr[k+1]) k--;
            }
            else{
                vector<int> temp = {arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j] == arr[j-1]) j++;
                while(j<k && arr[k] == arr[k+1]) k--;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    int n = arr.size();
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // cout << "Enter the elements of the array: ";
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     arr.push_back(x);
    // }
    vector<vector<int>> result = three_sum(arr, n);

    cout << "Triplets with sum zero are:\n";
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
