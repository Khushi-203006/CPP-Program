#include<bits/stdc++.h>
using namespace std;

vector<int> first_last(const vector<int> &arr, int n , int target){
    int first = -1 , last = -1;
    int low = 0 , high = n-1;

    // Find first occurrence
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target){
            first = mid;
            high = mid - 1;   // search left side
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    // Find last occurrence
    low = 0; high = n-1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target){
            last = mid;
            low = mid + 1;   // search right side
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return {first,last};
}

int main(){
    vector<int> arr = {2,8,8,8,8,8,11,13};
    int n = arr.size();
    int target = 8;
    vector<int> result = first_last(arr,n,target);
    cout << "First and last occurrence of " << target << " is - ";
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    return 0;
}
