#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter elements in array: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout <<"Enter elemets: ";
        cin >> arr[i];} 
    int arr2[20]={0};
    arr2[0]=0;
    for(int i=0;i<n;i++){
        arr2[arr[i]]+=1;
    }
    int k;
    cout << "How many numbers want to count: ";
    cin >> k;
    while(k!=0){
        int num;
        cin >> num;
        cout << num << "--->"<< arr2[num] << endl;
        k--;
    }
    return 0;
} 