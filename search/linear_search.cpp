#include<bits/stdc++.h>
using namespace std;

int linear_Search(vector<int> arr, int k){
    int n = arr.size();
    int found = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == k){
            found = 1;
        }
    }
    if(found){
        return 1;
    }
}

int main(){
    vector<int> ans = {55,34,89,11,23,51};
    int key = 51;
    int result = linear_Search(ans,key);
    if(result == 1){
        cout << "Key found";
    }
    return 0;
}