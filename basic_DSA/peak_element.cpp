//arr = [1 2 3 4 3 2 1]
//o/p = 4
// int main(){
//     int i;
//     int arr[]= {};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bool found = false;
    
//     for(i=0;i<n;i++){
//         if( arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//             found = true;
//             break;
//         }
//     }
//     if(found){
//         cout << arr[i] << " is peak element.";
//     }
//     else{
//         cout << -1;
//     }
// }


#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int>& arr, int st, int end){
    int n = arr.size();
    st = 0 , end = n-1;
    while(st<end){
        int mid = (st+end)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return arr[mid];
            break;
        }
        else if(arr[mid] < arr[mid-1]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr= {1,2,3};
    int result = bs(arr,0,arr.size()-1);
    cout << "Peak element is: " << result << endl;
    return 0;
}