#include <bits/stdc++.h>
using namespace std;



// long long NCR(int n, int r){
//     long long res = 1;
//     for(int i=0;i<r;i++){
//         res *= (n-i);
//         res /= (i+1);
//     }
//     return res;
// }

// long long NCR(int n){
//     long long ans = 1;
//     cout << ans << " ";
//     for(int i=1;i<n;i++){
//         ans *= n-i;
//         ans /= i;
//         cout << ans << " ";
//     }
// }

// vector<int> generateRow(int row){
//     long long ans = 1;
//     vector<int> ansrow;
//     ansrow.push_back(ans);
//     for(int i=1;i<row;i++){
//         ans *= (row-i+1);
//         ans /= i;
//         ansrow.push_back(ans);
//     }
//     return ansrow;
// }

// vector<vector<int>> NCR(int n){
//     vector<vector<int>> ans;
//     for(int j=1;j<=n;j++){
//         ans.push_back(generateRow(j));
//     }
//     return ans;
// }

// int main(){
//     int r,c;
//     cout << "Enter Row:- " ;
//     cin >> r ;
//     cout << "Enter column:- " ;
//     cin >> c ;
//     vector<vector<int>> result = NCR(r);
//     long long result = NCR(r);
//     for (const auto& row : result) {
//         for (int val : row) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
//     cout << "Element at position " << r << "th row and " << c << "th column is " << result ;
// }