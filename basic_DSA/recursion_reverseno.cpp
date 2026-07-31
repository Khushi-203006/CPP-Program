#include<iostream>
using namespace std;
void fuct(int i,int n){
    if (i<1){
        return;
    }
    cout << i << " ";
    fuct(i-1,n);
}
int main (){
    int n;
    cout << "Enter number:- ";
    cin >>n;
    fuct(n,n);
    return 0;
}