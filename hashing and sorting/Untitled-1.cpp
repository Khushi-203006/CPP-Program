#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>  a[i];
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    int p;
    cin >> p;
    
    int b[n+1]={0};
    for(int i=0;i<n;i++){
        if(a[i]>=1 && a[i]<=n){
            b[a[i]]++;
        }
    }

    for(int i=1;i<=n;i++){
        cout << b[i] << " ";
    }
    return 0;
}