#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,target,flag=0;
    cin >> n >> target;
    int arr[n];
    vector<int> temp;
    for(int i=0;i<n;i++){
        cin >> arr[i]; 
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " "; 
    }
    cout << "\n";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                flag=1;
                temp.push_back(i);
                temp.push_back(j);
                break;
            }
        }
    }
    cout << "\n";
    if(flag==1){
        for(int i=0;i<temp.size();i++){
            cout << temp[i] << " ";
        }
    }
    else{
        cout << "No sum";
    }
    return 0;
}