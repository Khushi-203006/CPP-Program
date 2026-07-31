#include<iostream>
using namespace std;

int fact(int i,int product){
    if(i<1){
        return product;
    }
    else{
    return fact(i-1,product*i);
    }
}

int main(){
    int n,f;
    cout<< "Enter a number:- ";
    cin >> n;
    f=fact(n,1);
    cout << "Factorial=  "<< f;
    return 0;
}