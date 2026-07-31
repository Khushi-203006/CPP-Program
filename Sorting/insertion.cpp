#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {3,4,6,1,2,8,9};
    int n = arr.size();
    for(int i=0;i<=n-1;i++){
            int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
