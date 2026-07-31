#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int hash[265]={};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int count=0;
    for(int i=0;i<265;i++){
        if(hash[i]!=0){
            count++;
        }
    }
    cout << count;
    return 0;
}
