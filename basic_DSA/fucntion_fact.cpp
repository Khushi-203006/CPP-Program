#include <iostream>
using namespace std;

int fact(int i,int n){
    if(i>n){
        return;
    }
    int f *=i;
    fact(i+1,n);
}

int main(){
    int n,int f;
    cout<<"Enter number:- ";
    cin >> n ;
    func(1,n);
    cout << "Factorial is=  "<< f;
    return 0;
}
