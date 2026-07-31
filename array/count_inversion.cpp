#include<bits/stdc++.h>
using namespace std;

int count_inversion(vector<int> arr , int n){
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                cnt++;
            }
        }
    }
    return cnt;
}


int main(){
    vector<int> arr = {5,3,2,4,1};
    int n = arr.size();
    int result = count_inversion(arr,n);
    cout << "no of pair:- " << result;
}