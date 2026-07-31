#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void shift_zero(vector<int>& arr, int n){
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            for(int i=j+1;i<n;i++){
                if(arr[i]!=0){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}

int main(){
    int n=10;
    vector<int> arr(n);
    vector<int> arr = {1,0,2,3,2,0,0,4,5,1};

    shift_zero(arr,n);

    cout << "after shift\n";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}