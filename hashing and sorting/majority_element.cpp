#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    int hash[100]={};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int max= 0;
    int val = 0;
    for(int i=0;i<n;i++){
        if(hash[i]>max){
            max=hash[i];
            val=i;
        }
    }
    

    cout << "\n";
    cout << val;
    return 0;
}