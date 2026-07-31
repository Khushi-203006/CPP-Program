#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(int i=0;i<n;i++){
        a[i]=m[i+1];
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        cout << m[i] << " ";
    }
}