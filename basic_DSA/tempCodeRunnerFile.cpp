#include<iostream>
using namespace std;

void fucn(int i,int n){
    if (i>n){
        return 0;
    }
    return (i*i*i)+fucn(i+1,n);
}

int main(){
    int n,sum=0;
    cout << "Enter number:- ";
    cin >> n;
    sum = fucn(1,n);
    cout << "Sum =  " << sum;
    return 0;
}