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
    for(int start=0; start<n; start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}