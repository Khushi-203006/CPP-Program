#include<iostream>
#include<vector>
using namespace std;

// void merge_sort(int a1, int n, int a2, int m){
//     vector<int> a3(n+m);
// }

int main(){
    int n,m;
    cin >> n >> m;
    int a1[n], a2[m];
    for(int i=0;i<n;i++){
        cin >> a1[i];
    }
    for(int i=0;i<n;i++){
        cout << a1[i];
    }
    
    cout << "\n";

    for(int i=0;i<m;i++){
        cin >> a2[i];
    }
    for(int i=0;i<m;i++){
        cout << a2[i];
    }

    vector<int> a3;
    int right = 0 , left = 0;
    while(right<n && left<m){
        if(a1[right]<a2[left]){
            a3.push_back(a1[right]);
            right++;
        }
        else{
            a3.push_back(a2[left]);
            left++;
        }
    }
    while(right<n){
        a3.push_back(a1[right]);
        right++;
    }
    while(left<m){
        a3.push_back(a2[left]);
        left++;
    }
    cout << "\n";
    for(int i=0;i<a3.size();i++){
        cout << a3[i] << " ";
    }

    return 0;
}