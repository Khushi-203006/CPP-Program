#include<bits/stdc++.h>
using namespace std;

int cnt(vector<int> arr , int pages ,int n){
    int stu = 1 , pagestudent = 0;
    for(int i=0;i<=n-1;i++){
        if(pagestudent + arr[i] <= pages){
            pagestudent += arr[i];
        }
        else{
            stu++;
            pagestudent = arr[i];
        }
    }
    return stu;
}

int book_allocate(vector<int> arr , int n , int m){
    int low = *min_element(arr.begin() , arr.end()) , high = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(cnt(arr,mid,n) <= m){
            high = mid-1;
            ans  = mid;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {12,34,67,90};
    int n = 4;
    int m = 2;
    int result = book_allocate(arr,n,m);
    cout << result;
}