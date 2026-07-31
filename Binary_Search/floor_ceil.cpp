#include<bits/stdc++.h>
using namespace std;

vector<int> floor_ceil(vector<int>& arr, int x){
    int n = arr.size();
    int low = 0; 
    int high = n-1;
    int floor = -1;
    int ceil = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            floor = arr[mid];
            ceil = arr[mid];
            break;
        }
        else if(arr[mid] < x){
            floor = arr[mid];
            low = mid+1;
        }
        else{
            ceil = arr[mid];
            high = mid-1;
        }
    }
    return {floor,ceil};
}


int main(){
    vector<int> arr = {10,20,30,40,50};
    int x = 45;
    vector<int> result = floor_ceil(arr,x);
    cout << "Floor: " << result[0] << ", Ceil: " << result[1] << endl;
    return 0;
}