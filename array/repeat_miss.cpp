#include<bits/stdc++.h>
using namespace std;

// vector<int> repeat_miss(vector<vector<int>> arr,int n){
//     vector<int> flat;
//     for(auto row : arr){
//         for(auto ele : row){
//             flat.push_back(ele);
//         }
//     }
//     int repeat = -1;
//     int miss = -1;
//     int m = flat.size();
//     for(int i=1;i<=m;i++){
//         int cnt = 0;
//         for(int j=0;j<m;j++){
//             if(flat[j] == i) cnt++;
//         }
//         if(cnt==2) repeat = i;
//         if(cnt==0) miss = i;
//     }
//     return {repeat,miss};
// }

// vector<int> repeat_miss(vector<vector<int>> arr,int n){
//     vector<int> flat;
//     for(auto row : arr){
//         for(auto ele : row){
//             flat.push_back(ele);
//         }
//     }
//     int repeat = -1;
//     int miss = -1;
//     int m=flat.size();
//     unordered_map<int,int> mpp;
//     for(int i=0;i<m;i++){
//         mpp[flat[i]]++;
//     }
//     for(int i=1;i<=m;i++){
//         if(mpp[i] == 2) repeat = i;
//         if(mpp[i] == 0) miss = i;
//     }
//     return {repeat,miss};
// }


vector<int> repeat_miss(vector<int> arr){
    long long n = arr.size();
    long long sy = (n*(n+1)) / 2; // 21
    long long s2y = (n*(n+1)*(2*n+1))/6; // 91
    long long sx = 0;
    long long s2x = 0;
    for(long long i=0;i<n;i++){
        sx += arr[i]; //17
        s2x += (arr[i] * arr[i]); //67
    }
    long long val1 = sy-sx;
    long long val2 = s2y-s2x;
    val2 = val2/val1;
    long long x = (val1+val2)/2;
    long long y = val2-x;
    return {(int)x,(int)y};
}


int main(){
    vector<int> arr = {4,3,6,2,1,1};
    int n = arr.size();
    vector<int> result = repeat_miss(arr);
    cout << result[0] << " " << result[1];
}