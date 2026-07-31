#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp=arr[0];
    for (int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    return arr;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    rotateArray(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i];
    }
}