#include<bits/stdc++.h>
using namespace std;

// vector<int> majority_element(vector<int> arr){
//      vector<int> ls;
//      int n = arr.size();
//      for(int i=0;i<n;i++){
//         if(ls.size() == 0 || ls[0] != arr[i]){
//             int cnt = 0;
//             for(int j=0;j<n;j++){
//                 if(arr[j] == arr[i]) cnt++;
//             }

//             if(cnt>n/3) ls.push_back(arr[i]);
//         }
//         if(ls.size() == 2) break;
//      }
//      return ls;
// }

// vector<int> majority_element(vector<int> arr){
//     int n = arr.size();
//     unordered_map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     vector<int> result;
//     for(auto it : mpp){
//         if(it.second > n/3) result.push_back(it.first);
//     }
//     return result;
// }

vector<int> majority_element(vector<int> arr){
    int cnt1=0, cnt2=0;
    int ele1 = INT_MIN , ele2 = INT_MIN;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(cnt1 == 0 && ele2!=arr[i]){
            cnt1++;
            ele1 = arr[i];
        }
        else if(cnt2 == 0 && ele1!=arr[i]){
            cnt2++;
            ele2 = arr[i];
        }
        else if(ele1 == arr[i]) cnt1++;
        else if(ele2 == arr[i]) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }

    cnt1=0,cnt2=0;
    vector<int> res;
    for(int i=0;i<n;i++){
        if(arr[i] == ele1) cnt1++;
        if(arr[i] == ele2) cnt2++;
    }
    if(cnt1 > n/3) res.push_back(ele1);
    if(cnt2 > n/3) res.push_back(ele2);
    return res;     
}

int main(){
    int n;
    vector<int>  arr;
    cout << "Enter element size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int>  result = majority_element(arr);
    for(int i=0;i<result.size();i++){
        cout << result[i] << " " ;
    }
    
}