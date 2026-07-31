#include<iostream>
using namespace std;
int main(){
   /* int arr[5];
    cout << "enter elements= ";
    cin>> arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<< arr[0]<< " " <<arr[1]<< " " <<arr[2]<< " " <<arr[3]<< " " <<arr[4] ;
    cout<< "\n"<< arr[4]<< "\n";
    arr[4]=12;
    cout<< "\n"<< arr[4]<< "\n";
    cout<< arr[0]<< " " <<arr[1]<< " " <<arr[2]<< " " <<arr[3]<< " " <<arr[4] ;
    arr[3]+=10;
    cout<< "\n"<< arr[3]<< "\n";*/
    string s = "Khushi Rajvanshi ";
    int len = s.size();
    s[len-2]= 'u';
    cout << s << "\n";
    cout << len ;
    return 0;
}