#include<bits/stdc++.h>
using namespace std;

float merge(vector<int> num1 , vector<int> num2 , int n , int m){
    vector<int> new_array(n+m);
    int i=0, j=0 ,k=0;
    while(i<n && j<m){
        if(num1[i] < num2[j]){
            new_array[k++] = num1[i++];
        }
        else{
            new_array[k++] = num2[j++];
        }
    }
    while(i<n){
        new_array[k++] = num1[i++];
    }
    while(j<m){
        new_array[k++] = num2[j++];
    }
    if((n+m)%2==0){
        return (new_array[(n+m)/2] + new_array[(n+m)/2 - 1]) /2.0;
    }
    else{
        return (new_array[(n+m)/2.0]);
    }
}

int main(){
    vector<int> nums1 = {5,7,9};
    vector<int> nums2 = {8,10,11};
    float result = merge(nums1, nums2 , nums1.size() , nums2.size());
    cout << result;
    return 0;
}