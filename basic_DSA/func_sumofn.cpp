#include <iostream>
using namespace std;

int son(int i,int n){
    if (i>n){
        return 0;
    }
    return (i)+son(i+1,n);
}
int main(){
    int n,sum=0;
    cout << "Enter number:- ";
    cin >> n;
    sum = son(1,n);
    cout << "Sum =  "<< sum;
    return 0;
}