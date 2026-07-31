#include<iostream>
using namespace std;

int main(){
    int n,i,org,count=0;
    cout << "Enter Number:- ";
    cin >> n;
    org=n;
    while(n!=0){
        i=n%10;
        if (org%i==0){
            count++;
        }
        n/=10;
    }
    cout<< count << endl;
    return 0;
}