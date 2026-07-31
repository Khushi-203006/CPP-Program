#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter lenght:- " ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter element:- ";
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    int sum=0;
    int maxsum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxsum= max(sum,maxsum);
        if(sum<0){
            sum=0;
        }
    }
    cout<< "max sum of subarray:- "<< maxsum;
    return 0;
}