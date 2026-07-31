#include<bits/stdc++.h>
using namespace std;

vector<int> selection(vector<int> arr, int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i;j<n-2;j++){
            if(arr[j] < arr[min]) min = j;
        }
        swap(arr[i],arr[min]);
    }
    return arr;
}

int main(){
    vector<int> arr = {34,76,44,16,78,94};
    int n = arr.size();
    vector<int> result = selection(arr,n);
    cout << "Output array - ";
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    return 0;
}


