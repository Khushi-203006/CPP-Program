#include<iostream>
using namespace std;

void func(int i,int n,string s){
    if (i>n){
        return;
    }
    cout<< s << "-"<< i << endl;
    func(i+1,n,s);
}

int main(){
    int n,i;
    string s;
    cout<< "Enter string:- ";
    cin >> s ;
    cout<<"Enter no. of loop:- ";
    cin >> n;
    func(1,n,s);
    return 0;
}