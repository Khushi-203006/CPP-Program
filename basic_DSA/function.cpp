#include<iostream>
using namespace std;
 
/*void name(string manner){
    cout<< "always " << manner;
}
int main(){
    string manner;
    cout << "Enter name : ";
    cin >> manner;
    name(manner);
    return 0;
}*/


/*int sum(int a,int b){
    int c= a+b;
    return c;
}

int main(){
    int num1, num2;
    cout<< "Enter 2 number: " << endl;
    cin >> num1 >> num2;
    int ret = sum(num1,num2);
    cout << ret;
    return 0;
}*/

int max(int a,int b){
    if (a>b){
        return a;
    }
    else {
        return b;
    }
}


int main(){
    int num1, num2;
    cout << "Enter 2 numbers: ";
    cin>> num1 >> num2;
    int Maximum = max(num1,num2);
    cout << "Maximum number is: " << Maximumh;
    return 0;
}