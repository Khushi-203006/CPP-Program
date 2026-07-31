#include<bits/stdc++.h>
using namespace std;

void merge_sort_array(vector<int> arr1, vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    int left =0;
    int right = 0;
    vector<int> merge_array;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(),arr2.end());
    while(left<n && right<m){
        if(arr1[left] == 0) left++;
        if(arr2[right] == 0) right++;
        if(arr1[left] < arr2[right]) merge_array.push_back(arr1[left++]);
        else merge_array.push_back(arr2[right++]);
    }
    while(left<n) merge_array.push_back(arr1[left++]);
    while(right<m) merge_array.push_back(arr2[right++]);
    for(int i=0;i<merge_array.size();i++){
        cout << merge_array[i] << " ";
    }
}

int main(){
vector<int> arr1 = {1,3,2,0,0,0};
vector<int> arr2 = {2,5,6};

merge_sort_array(arr1,arr2);
return 0;
}