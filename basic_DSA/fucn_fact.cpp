#include<iostream>
using namespace std;

int fact(int i,int n){
    if(i>n){
        return 1;
    }
    return (i)*fact(i+1,n);
}

int main(){
    int n,f;
    cout<< "Enter number:- ";
    cin >> n;
    f=fact(1,n);
    cout << "Fcatorial =  "<< f;
    return 0;
}