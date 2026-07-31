#include<iostream>
using namespace std;

void printno(int i, int n){
    if (i>n){
        return;
    }
    cout << i << ' ';
    printno(i+1,n);}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    printno(1,n);
    return 0;
}







/*#include<iostream>
using namespace std;
 void printno(int n){
        for(int i=1;i<=n;i++){
            cout << i <<" ";
        }
 }

int main(){
    int n, i;
    cout << " Enter number:- ";
    cin >> n;
    printno(n);
    return 0;
}*/